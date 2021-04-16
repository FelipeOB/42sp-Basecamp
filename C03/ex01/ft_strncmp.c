/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forbite- <forbite-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 11:32:55 by forbite-          #+#    #+#             */
/*   Updated: 2021/04/13 12:24:13 by forbite-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

unsigned int ft_convertchar2(char c)
{
	unsigned int n;

	if (c < 0)
		n = (255 - (c * -1)) + 1;
	else
		n = c;
	return (n);
}

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int  i;
	unsigned int p;
	unsigned int m;

	i = 0;
	if (n == 0)
		return (0);	
	while((i < n) || (s1[i] != '\0') || (s2[i] != '\0'))
	{
		p = ft_convertchar2(s1[i]);
		m = ft_convertchar2(s2[i]);
		if (p != m)
			return (p - m);
		i++;
	}
	return (0);
}
int main(void)
{
    char str0[] = "string";
    char str1[] = "string1";
    char str2[] = "abcdef";
    char str3[] = "fedcba";
    char str4[] = {-123, -56, 6, 32, 64, 65, 66, 0};
    char str5[] = "abcdefghijadofhiasdfj";
    char str6[] = "abcdefghijadfedcba";
    
    int result1;
    int result2;

    result1 = ft_strncmp(str0, str1, 0);
    result2 = strncmp(str0, str1, 0);
    printf("%d\t%d\n", result2, result1);

    result1 = ft_strncmp(str1, str2, 5);
    result2 = strncmp(str1, str2, 5);
    printf("%d\t%d\n", result2, result1);
    
    result1 = ft_strncmp(str2, str3, 10);
    result2 = strncmp(str2, str3, 10);
    printf("%d\t%d\n", result2, result1);

    result1 = ft_strncmp(str3, str4, 20);
    result2 = strncmp(str3, str4, 20);
    printf("%d\t%d\n", result2, result1);

    result1 = ft_strncmp(str4, str5, 50);
    result2 = strncmp(str4, str5, 50);
    printf("%d\t%d\n", result2, result1);

    result1 = ft_strncmp(str5, str6, 100);
    result2 = strncmp(str5, str6, 100);
    printf("%d\t%d\n", result2, result1);

}
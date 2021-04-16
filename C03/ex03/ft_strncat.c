/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forbite- <forbite-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 16:28:36 by forbite-          #+#    #+#             */
/*   Updated: 2021/04/13 16:36:32 by forbite-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strncat(char *dest, const char *src, unsigned int nb)
{
	unsigned int dest_len;
	unsigned int i;

	dest_len = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	i = 0;
	while (i < nb && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return dest;
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
	

	char buffer0[100];
	char buffer1[100];

	int i = 0;
	while (i < 100)
	{
		buffer0[i] = 'a';
		buffer1[i] = 'a';
		++i;
	}

	strcpy(buffer0, str1);
	strcpy(buffer1, str1);

	if (strncat(buffer1, str3, 3), buffer0 != ft_strncat(buffer0, str3, 3))
		printf("KO, test00 wrong return\n");
	else if (strcmp(buffer0, buffer1) != 0)
		printf("KO, test00 expected %s got %s\n", buffer1, buffer0);
	else if (strncat(buffer1, str1, 100), buffer0 != ft_strncat(buffer0, str1, 100))
		printf("KO, test01 wrong return\n");
	else if (strcmp(buffer0, buffer1) != 0)
		printf("KO, test01 expected %s got %s\n", buffer1, buffer0);
	else
		printf("OK\n");

	printf("%s\t%s\n", strncat(buffer1, str3, 3),ft_strncat(buffer0, str3, 3));
	printf("%s\t%s\n", strncat(buffer1, str1, 100),ft_strncat(buffer0, str1, 100));
}
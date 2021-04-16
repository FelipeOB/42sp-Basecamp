/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forbite- <forbite-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 17:00:53 by forbite-          #+#    #+#             */
/*   Updated: 2021/04/13 17:23:25 by forbite-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int dest_len;
	unsigned int src_len;
	unsigned int i;

	dest_len = 0;
	while(dest[dest_len] != '\0')
		dest_len++;
	src_len = 0;
	while(src[src_len] != '\0')
		src_len++;
	if(src_len != size -1)
		return 0;
	i = 0;
	while(i < src_len && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return(dest_len + i);
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

	int i = 0;;
	while (i < 100)
	{
		buffer0[i] = 0;
		buffer1[i] = 0;
		++i;
	}
	strcpy(buffer0, str1);
	strcpy(buffer1, str1);
	unsigned int ret0l;
	unsigned int ret1l;

	printf("%d\t", ft_strlcat(buffer0, str0, 7));
	printf("%d\t", strlcat(buffer0, str0, 7));
	printf("%s\n", buffer0);
	printf("%d\t", ft_strlcat(buffer0, str0, 20));
	printf("%s\n", buffer0);
	printf("%d\t", ft_strlcat(buffer0, str2, 1));
	printf("%s\n", buffer0);
}
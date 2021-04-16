/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forbite- <forbite-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 11:51:04 by forbite-          #+#    #+#             */
/*   Updated: 2021/04/13 16:26:56 by forbite-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcat(char *dest, const char *src)
{
	int dest_len;
	int j;
	
	dest_len = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[dest_len] = src[j];
		j++;
		dest_len++;
	}
	dest[dest_len] = '\0';
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

	if (strcat(buffer1, str0), buffer0 != ft_strcat(buffer0, str0))
		printf("KO, test00 wrong return\n");
	else if (strcmp(buffer0, buffer1) != 0)
		printf("KO, test00 expected %s got %s\n", buffer1, buffer0);
	else if (strcat(buffer1, "ba ba ta ta"), buffer0 != ft_strcat(buffer0,  "ba ba ta ta"))
		printf("KO, test00 wrong return\n");
	else if (strcmp(buffer0, buffer1) != 0)
		printf("KO, test00 expected %s got %s\n", buffer1, buffer0);
	else
		printf("OK\n");
	printf("%s\n", ft_strcat(buffer0, str0));
	printf("%s\n", ft_strcat(buffer0, "ba ba ta ta"));
	
}

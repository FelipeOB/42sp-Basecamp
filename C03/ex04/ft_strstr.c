/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: forbite- <forbite-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 16:38:22 by forbite-          #+#    #+#             */
/*   Updated: 2021/04/16 12:12:41 by forbite-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int ft_verify_nexts(char *str, char *to_find, int i)
{
	int j;

	j = 0;
	while(to_find[j] != '\0')
	{
		if(str[i] != to_find[j])
			return 0;
		i++;
		j++;
	}
	return 1;
}

char *ft_strstr(char *str, char *to_find)
{
	char *ocurrence = NULL;
	int  i = 0;
	
	if (to_find[0] == '\0')
	{
		ocurrence = &str[i];
		return ocurrence;
	}
	while(str[i] != '\0')
	{
		if(str[i] == to_find[0])
			if(ft_verify_nexts(str, to_find, i))
			{
				ocurrence = &str[i];
				return ocurrence;
			}
		i++;
	}
	return ocurrence;
}

int main(void)
{
	char findin0[] = "asdfasdfstringasaa";
	char findin1[] = "string aaa aaa string";
	char findin2[] = "1349813-2139485-1234";

	if (strstr(findin0, "string") != ft_strstr(findin0, "string"))
		printf("KO test00\n");
	else if (strstr(findin1, "string") != ft_strstr(findin1, "string"))
		printf("KO test01\n");
	else if (strstr(findin2, "213") != ft_strstr(findin2, "213"))
		printf("KO test02\n");
	else if (strstr(findin0, "213") != ft_strstr(findin0, "213"))
		printf("KO test03\n");
	else if (strstr(findin2, "555555") != ft_strstr(findin2, "555555"))
		printf("KO test04\n");
	else if (strstr(findin2, "") != ft_strstr(findin2, ""))
		printf("KO test05\n");
	else if (strstr(findin0, "123") != ft_strstr(findin0, "123"))
		printf("KO test06\n");
	else if (strstr(findin0, "asdfasdfstringasa") != ft_strstr(findin0, "asdfasdfstringasa"))
		printf("KO test07\n");
	else if (strstr("", "") != ft_strstr("", ""))
		printf("KO test08\n");
	else
		printf("OK\n");

	printf("%s\t%s\n", strstr(findin0, "string"), ft_strstr(findin0, "string"));
	printf("%s\t%s\n", strstr(findin1, "string"), ft_strstr(findin1, "string"));
	printf("%s\t%s\n", strstr(findin2, "213"), ft_strstr(findin2, "213"));
	printf("%s\t%s\n", strstr(findin0, "213"), ft_strstr(findin0, "213"));
	printf("%s\t%s\n", strstr(findin2, "555555"), ft_strstr(findin2, "555555"));
	printf("%s\t%s\n", strstr(findin2, ""), ft_strstr(findin2, ""));
	printf("%s\t%s\n", strstr(findin0, "123"), ft_strstr(findin0, "123"));
	printf("%s\t%s\n", strstr(findin0, "asdfasdfstringasa"), ft_strstr(findin0, "asdfasdfstringasa"));
	printf("%s\t%s\n", strstr("", ""), ft_strstr("", ""));
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pumungka <pumungka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 15:37:35 by pumungka          #+#    #+#             */
/*   Updated: 2023/06/20 11:09:50 by pumungka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

char	*print_strstr(char *str, int a)
{
	int	i;

	i = 0;
	while (i < a)
	{
		str++;
		i++;
	}
	return (str);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		n;
	char	*prepos;

	prepos = to_find;
	i = 0;
	while (str[i])
	{
		to_find = prepos;
		n = i;
		while (str[i] == *to_find && *to_find != '\0')
		{
			to_find++;
			if (str[i + 1] == *to_find)
			{
				i++;
			}
		}
		if (*to_find == '\0')
		{
			return (print_strstr(str, n));
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
    char str1[] = "ababadcd";
    char str2 [] = "abc";

    //printf("%s\n",strstr(str1 , str2));
    printf("%s",ft_strstr(str1 , str2));
}*/
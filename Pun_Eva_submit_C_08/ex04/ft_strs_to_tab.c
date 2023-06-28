/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pumungka <pumungka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 16:37:28 by pumungka          #+#    #+#             */
/*   Updated: 2023/06/27 16:39:58 by pumungka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include "ft_stock_str.h"
#include <stdlib.h>

/*
typedef struct s_stock_str
{
int size;
char *str;
char *copy;
} t_stock_str;
*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dst, char *src)
{
	int	c;

	c = 0;
	while (*src)
	{
		dst[c] = *src;
		src++;
		c++;
	}
	dst[c] = '\0';
	return (dst);
}

char	*ft_strdup(char *src)
{
	char	*dst;

	dst = malloc(ft_strlen(src) + 1);
	if (dst == NULL)
		return (NULL);
	ft_strcpy(dst, src);
	return (dst);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			j;
	t_stock_str	*ans;

	ans = malloc(sizeof(t_stock_str) * (ac + 1));
	if (ans == NULL)
		return (NULL);
	j = 0;
	while (j < ac)
	{
		ans[j].str = av[j];
		ans[j].copy = ft_strdup(av[j]);
		ans[j].size = ft_strlen(av[j]);
		j++;
	}
	ans[ac].str = 0;
	return (ans);
}

/*
int main ()
{
    char *argv[] = {"test1" , "test27", "test897"};
    ft_strs_to_tab(3 , argv);
        
}*/
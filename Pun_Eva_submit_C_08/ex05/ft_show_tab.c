/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pumungka <pumungka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 21:05:51 by pumungka          #+#    #+#             */
/*   Updated: 2023/06/27 16:40:06 by pumungka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include <stdlib.h>
#include "ft_stock_str.h"
#include <unistd.h>
/*
typedef struct s_stock_str
{
int size;
char *str;
char *copy;
} t_stock_str;*/

void	ft_putstr(char *str)
{
	char	n;

	while (*str)
	{
		n = *str;
		write(1, &n, 1);
		str++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + 48);
	}
}

/*
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
}*/

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		i++;
	}
}

/*
int main ()
{
    char *argv[] = {"test1" , "test27", "test897"};
    struct s_stock_str *par  = ft_strs_to_tab(3 , argv);
    ft_show_tab(par);
}*/

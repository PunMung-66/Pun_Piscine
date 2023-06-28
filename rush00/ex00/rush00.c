/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakitwo <thakitwo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 14:58:23 by rthokaeo          #+#    #+#             */
/*   Updated: 2023/06/12 16:21:49 by thakitwo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	strtoint(char *str)
{
	int		pn;
	int		ans;

	pn = 1;
	ans = 0;
	if (*str == '-')
	{
		pn = -1;
		str++;
	}
	while (*str)
	{
		ans *= 10;
		if (pn == -1)
			ans -= *str - '0';
		else
			ans += *str - '0';
		str++;
	}
	return (ans);
}

void	print_x(int x)
{
	int	i;

	ft_putchar('o');
	if (x == 1)
		return ;
	i = 0;
	while (i < x - 2)
	{
		ft_putchar('-');
		i++;
	}
	ft_putchar('o');
}

void	print_y(int y)
{
	int	i;

	ft_putchar('|');
	if (y == 1)
		return ;
	i = 0;
	while (i < y - 2)
	{
		ft_putchar(' ');
		i++;
	}
	ft_putchar('|');
}

void	rush(int x, int y)
{
	int	i;

	if (x <= 0 || y <= 0)
	{
		return ;
	}
	print_x(x);
	ft_putchar('\n');
	i = 0;
	while (i < y - 2)
	{
		print_y(x);
		i++;
		ft_putchar('\n');
	}
	if (y != 1)
		print_x(x);
}

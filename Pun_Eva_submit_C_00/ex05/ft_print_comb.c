/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pumungka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 22:46:31 by pumungka          #+#    #+#             */
/*   Updated: 2023/06/11 01:08:46 by pumungka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	check_comma(char h, char t, char n)
{
	char	hun;
	char	ten;
	char	num;

	hun = h + '0';
	ten = t + '0';
	num = n + '0';
	write(1, &hun, 1);
	write(1, &ten, 1);
	write(1, &num, 1);
	if (hun != 55)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	h;
	int	t;
	int	n;

	h = 0;
	t = 1;
	n = 2;
	while (h <= 9)
	{
		while (t <= 9)
		{
			while (n <= 9)
			{
				check_comma(h, t, n);
				n++;
			}
		t++;
		n = t + 1;
		}
	h++;
	t = h;
	}
}

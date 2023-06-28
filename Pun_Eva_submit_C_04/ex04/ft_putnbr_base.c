/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pumungka <pumungka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 11:24:49 by pumungka          #+#    #+#             */
/*   Updated: 2023/06/27 11:10:16 by pumungka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include <unistd.h>

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

int	check_base(char *base)
{
	int	i;
	int	j;

	if (ft_strlen(base) < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || base[i] < 32 || base[i] > 126)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_zero(int nbr, char *base)
{
	if (nbr == 0)
	{
		write(1, &base[0], 1);
		return (0);
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	nbr_c[32];
	long	nbr_l;
	int		i;

	i = 0;
	nbr_l = nbr;
	if (check_zero(nbr_l, base) == 0)
		return ;
	if (check_base(base) == 0)
		return ;
	if (nbr < 0)
	{
		nbr_l *= -1;
		write(1, "-", 1);
	}
	while (nbr_l > 0)
	{
		nbr_c[i] = base[nbr_l % ft_strlen(base)];
		nbr_l /= ft_strlen(base);
		i++;
	}
	while (--i >= 0)
		write(1, &nbr_c[i], 1);
}

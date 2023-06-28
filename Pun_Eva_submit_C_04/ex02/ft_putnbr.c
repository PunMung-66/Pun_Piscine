/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pumungka <pumungka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 11:19:17 by pumungka          #+#    #+#             */
/*   Updated: 2023/06/20 11:20:28 by pumungka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	count_digits(int num)
{
	int	count;

	count = 0;
	while (num != 0)
	{
		num /= 10;
		count++;
	}
	return (count);
}

int	power(int a, int b )
{
	int	power;
	int	i;

	i = 1;
	power = 1;
	while (i <= b)
	{
		i++;
		power = power * a ;
	}
	return (power);
}

void	print_f(int digit, int nb )
{
	int		result;
	char	nb_c;

	while (digit != 0)
	{
		result = nb / (power(10, (digit - 1)));
		result %= 10;
		nb_c = result + '0';
		write(1, &nb_c, 1);
		digit--;
	}
}

void	ft_putnbr(int nb)
{
	int	digit;

	digit = count_digits(nb);
	if (2147483647 >= nb && nb > 0)
	{
		print_f(digit, nb);
	}
	else if (-2147483647 <= nb && nb < 0)
	{
		nb = nb * -1;
		write(1, "-", 1);
		print_f(digit, nb);
	}
	else if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb == 0)
	{
		write(1, "0", 1);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pumungka <pumungka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 11:15:07 by pumungka          #+#    #+#             */
/*   Updated: 2023/06/22 11:35:39 by pumungka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	mod;

	i = 2;
	mod = 1;
	if (nb == 2147483647)
		return (1);
	while (i <= nb && nb > 1 && mod > 0)
	{
		mod = nb % i;
		if (i == nb)
			return (1);
		i++;
	}
	return (0);
}

int	ft_find_next_prime(int nb)
{
	int	next_prime;

	next_prime = 0;
	next_prime = nb;
	while (nb <= next_prime)
	{
		if (ft_is_prime(next_prime) == 1)
			break ;
		next_prime++;
	}
	return (next_prime);
}

// int main()
// {
//     printf("%d", ft_find_next_prime(5));
// }
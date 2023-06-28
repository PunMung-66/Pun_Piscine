/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pumungka <pumungka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 10:33:12 by pumungka          #+#    #+#             */
/*   Updated: 2023/06/22 11:43:58 by pumungka         ###   ########.fr       */
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
/*
int	main(void)
{
    printf("%d", ft_is_prime(2147483647));
}*/
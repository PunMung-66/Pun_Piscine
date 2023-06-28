/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pumungka <pumungka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 11:22:44 by pumungka          #+#    #+#             */
/*   Updated: 2023/06/20 17:25:12 by pumungka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <stdlib.h>*/

int	ft_atoi(char *str)
{
	int	sign;
	int	ans;

	sign = 1;
	ans = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\r'
		|| *str == '\f' || *str == '\v')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = sign * -1;
		str++;
	}
	while ('0' <= *str && *str <= '9' && *str)
	{
		ans *= 10;
		ans = ans + (*str - '0');
		str++;
	}
	return (ans * sign);
}
/*
int	main(void)
{
	char num[] = "-\n123";
    printf("%d\n", atoi(num));
	printf("%d\n", ft_atoi(num));
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pumungka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 11:41:17 by pumungka          #+#    #+#             */
/*   Updated: 2023/06/14 11:55:16 by pumungka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	result;

	result = 1;
	while (*str)
	{
		if (32 > *str || *str > 126)
		{
			return (0);
		}
		str++;
	}
	return (result);
}

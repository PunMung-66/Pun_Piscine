/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pumungka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:09:32 by pumungka          #+#    #+#             */
/*   Updated: 2023/06/12 10:18:37 by pumungka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	swop(int*xp, int*yp)
{
	int	temp;

	temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void	ft_rev_int_tab(int*tab, int size)
{
	int	m;
	int	n;

	n = size / 2;
	m = size - 1;
	while (n > 0)
	{
		swop(tab, tab + m);
		m -= 2;
		tab++;
		n--;
	}
}

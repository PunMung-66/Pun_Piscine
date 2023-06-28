/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pumungka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:50:57 by pumungka          #+#    #+#             */
/*   Updated: 2023/06/12 13:54:31 by pumungka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	swap(int*a, int*b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int*tab, int size)
{
	int	n;
	int	m;

	n = 0;
	m = 0;
	while (n < size)
	{
		while (m < size)
		{
			if (tab[m] > tab[n])
			{
				swap(&tab[n], &tab[m]);
			}
			m++;
		}
		m = 0;
		n++;
	}
}

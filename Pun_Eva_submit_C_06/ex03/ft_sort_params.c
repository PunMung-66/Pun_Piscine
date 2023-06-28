/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pumungka <pumungka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 15:56:02 by pumungka          #+#    #+#             */
/*   Updated: 2023/06/23 22:58:16 by pumungka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' || s2[i] == '\0')
		{
			return (0);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

void	swap(char **a, char **b)
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(char **tab, int size)
{
	int	n;
	int	m;

	n = 0;
	m = 0;
	while (n < size)
	{
		while (m < size)
		{
			if (ft_strcmp(tab[m], tab[n]) > 0)
			{
				swap(&tab[n], &tab[m]);
			}
			m++;
		}
		m = 0;
		n++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	j = 1;
	i = 0;
	ft_sort_int_tab(argv, argc);
	while (j < argc)
	{
		while (argv[j][i] != '\0')
		{
			write(1, &(argv[j][i]), 1);
			i++;
		}
		write(1, "\n", 1);
		i = 0;
		j++;
	}
}

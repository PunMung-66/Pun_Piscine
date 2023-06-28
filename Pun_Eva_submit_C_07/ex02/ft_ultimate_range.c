/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pumungka <pumungka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 01:15:44 by pumungka          #+#    #+#             */
/*   Updated: 2023/06/24 17:38:41 by pumungka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	n;
	int	i;
	int	*ans;

	n = max - min;
	i = 0;
	ans = (int *)malloc((n + 1) * sizeof(int));
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (ans == NULL)
		return (-1);
	while (min < max)
	{
		ans[i] = min;
		min++;
		i++;
	}
	ans[i] = '\0';
	*range = ans;
	return (n);
}
/*
int	main(void)
{
    int n;
    int **range;
	int *ptr;
	range = &ptr;
    n = ft_ultimate_range( range, 6 , 10);
    printf("%d", *ptr);
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pumungka <pumungka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 21:32:56 by pumungka          #+#    #+#             */
/*   Updated: 2023/06/24 10:13:51 by pumungka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	n;
	int	i;
	int	*ans;

	n = max - min;
	i = 0;
	ans = (int *)malloc((n + 1) * sizeof(int));
	if (min >= max)
		return (NULL);
	if (ans == NULL)
		return (NULL);
	while (min < max)
	{
		ans[i] = min;
		min++;
		i++;
	}
	ans[i] = '\0';
	return (ans);
}
/*
int	main(void)
{
    int *num;

    num = ft_range(6 , 10);
    printf("%d" , num[3]);
}*/
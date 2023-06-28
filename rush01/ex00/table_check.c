/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   table_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkaolim <pkaolim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 23:00:43 by pkaolim           #+#    #+#             */
/*   Updated: 2023/06/18 23:05:39 by pkaolim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	arr_dup_count(int *nb, int target)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < 4)
	{
		if (nb[i] == target)
		{
			count++;
		}
		i++;
	}
	return (count);
}

int	sum_line(int *nb)
{
	int	sum;

	while (*nb)
	{
		sum = *nb;
		nb++;
	}
	return (sum);
}

int	check_corner(int (*row)[4], int (*col)[4])
{
	if (col[0][0] == 1)
		if (!(row[0][0] == col[0][0]))
			return (0);
	if (col[0][3] == 1)
		if (!(row[1][0] == col[0][3]))
			return (0);
	if (col[1][3] == 1)
		if (!(row[1][3] == col[1][3]))
			return (0);
	if (col[1][0] == 1)
		if (!(row[0][3] == col[1][0]))
			return (0);
	return (1);
}

int	check_problem(int (*arr)[4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if ((3 > arr[0][i] + arr[1][i]) || (arr[0][i] + arr[1][i] > 5))
			return (0);
		i++;
	}
	i = 0;
	while (i < 2)
	{
		if (!(sum_line(arr[i]) <= 10 || 7 <= sum_line(arr[i])))
			return (0);
		if (arr_dup_count(arr[i], 1) > 1)
			return (0);
		if (arr_dup_count(arr[i], 2) > 3)
			return (0);
		if (arr_dup_count(arr[i], 3) > 2)
			return (0);
		if (arr_dup_count(arr[i], 4) > 1)
			return (0);
		i++;
	}
	return (1);
}

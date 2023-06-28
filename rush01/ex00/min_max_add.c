/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_max_add.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkaolim <pkaolim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 22:59:46 by pkaolim           #+#    #+#             */
/*   Updated: 2023/06/18 23:04:54 by pkaolim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rowfill1_4(int *arr)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		arr[i] = i + 1;
		i++;
	}
}

void	rowfill4_1(int *arr)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		arr[i] = 4 - i;
		i++;
	}
}

void	colfill1_4(int (*arr)[4], int i)
{
	int	a;

	a = 0;
	while (a < 4)
	{
		arr[a][i] = a + 1;
		a++;
	}
}

void	colfill4_1(int (*arr)[4], int i)
{
	int	a;
	int	n;

	a = 4;
	n = 0;
	while (a > 0)
	{
		arr[a - 1][i] = n + 1;
		n++;
		a--;
	}
}

void	max_min_add(int (*row)[4], int (*col)[4], int (*ans)[4])
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (i < 4)
	{
		if (row[0][i] == 1)
			ans[i][0] = 4;
		if (row[1][i] == 1)
			ans[i][3] = 4;
		if (col[0][i] == 1)
			ans[0][i] = 4;
		if (col[1][i] == 1)
			ans[3][i] = 4;
		if (row[0][i] == 4)
			rowfill1_4(ans[i]);
		if (row[1][i] == 4)
			rowfill4_1(ans[i]);
		if (col[0][i] == 4)
			colfill1_4(ans, i);
		if (col[1][i] == 4)
			colfill4_1(ans, i);
		i++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_view.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkaolim <pkaolim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 23:06:59 by pkaolim           #+#    #+#             */
/*   Updated: 2023/06/18 23:07:22 by pkaolim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	checkl(int *arr)
{
	int	max;
	int	pos;
	int	view;

	view = 1;
	pos = 0;
	max = arr[pos];
	while (pos < 4)
	{
		if (arr[pos] > max)
		{
			max = arr[pos];
			view++;
		}
		pos++;
	}
	return (view);
}

int	checkr(int *arr)
{
	int	max;
	int	pos;
	int	view;

	view = 1;
	pos = 3;
	max = arr[pos];
	while (pos >= 0)
	{
		if (arr[pos] > max)
		{
			max = arr[pos];
			view++;
		}
		pos--;
	}
	return (view);
}

int	checku(int (*arr)[4], int i)
{
	int	max;
	int	pos;
	int	view;

	view = 1;
	pos = 0;
	max = arr[pos][i];
	while (pos < 4)
	{
		if (arr[pos][i] > max)
		{
			max = arr[pos][i];
			view++;
		}
		pos++;
	}
	return (view);
}

int	checkd(int (*arr)[4], int i)
{
	int	max;
	int	pos;
	int	view;

	view = 1;
	pos = 3;
	max = arr[pos][i];
	while (pos >= 0)
	{
		if (arr[pos][i] > max)
		{
			max = arr[pos][i];
			view++;
		}
		pos--;
	}
	return (view);
}

int	checkview(int (*ans)[4], int (*row)[4], int (*col)[4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (checkl(ans[i]) != row[0][i] || checkr(ans[i]) != row[1][i])
			return (0);
		if (checku(&ans[0], i) != col[0][i] || checkd(&ans[0], i) != col[1][i])
			return (0);
		i++;
	}
	return (1);
}

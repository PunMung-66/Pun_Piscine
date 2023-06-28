/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkaolim <pkaolim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 23:08:21 by pkaolim           #+#    #+#             */
/*   Updated: 2023/06/18 23:34:35 by pkaolim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(char *str);
void	fill_zero_ans(int str[4][4]);
int		ft_strlen(char *arr);
int		check_ele(char *arr);
void	spr_input(int (*row)[4], int (*col)[4], char *input);
int		check_problem(int (*arr)[4]);
int		check_corner(int (*row)[4], int (*col)[4]);
void	max_min_add(int (*row)[4], int (*col)[4], int (*ans)[4]);
int		checkview(int (*ans)[4], int (*row)[4], int (*col)[4]);
int		backtrackplus(int (*ans)[4], int row, int col, int (*row_arr)[4],
			int (*col_arr)[4], int value);

int	issafe(int (*ans)[4], int row, int col, int value)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if ((ans[row][i] == value || ans[i][col] == value))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	backtrack(int (*ans)[4], int row, int col, int (*row_arr)[4],
		int (*col_arr)[4])
{
	int	value;

	value = 1;
	if (row == 4)
		if (checkview(ans, row_arr, col_arr) == 1)
			return (0);
	if (col == 4)
		return (backtrack(ans, row + 1, 0, row_arr, col_arr));
	if (ans[row][col] != 0)
		return (backtrack(ans, row, col + 1, row_arr, col_arr));
	if (ans[row][col] == 0)
	{
		while (value <= 4)
		{
			if (issafe(ans, row, col, value))
			{
				ans[row][col] = value;
				if (backtrack(ans, row, col + 1, row_arr, col_arr) == 0)
					return (0);
				ans[row][col] = 0;
			}
			value++;
		}
	}
	return (-1);
}

int	backtrackplus(int (*ans)[4], int row, int col, int (*row_arr)[4],
		int (*col_arr)[4], int value)
{
	if (issafe(ans, row, col, value))
	{
		ans[row][col] = value;
		if (backtrack(ans, row, col + 1, row_arr, col_arr) == 0)
			return (0);
		ans[row][col] = 0;
	}
	return (1);
}

void	ft_ans(int (*ans)[4])
{
	int		i;
	int		j;
	char	n;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			n = ans[i][j] + '0';
			write(1, &n, 1);
			if (j != 3)
			{
				write(1, " ", 1);
			}
			j++;
		}
		write(1, "\n", 1);
		j = 0;
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	row[2][4];
	int	col[2][4];
	int	ans[4][4];

	fill_zero_ans(ans);
	if (argc != 2 || ft_strlen(argv[1]) != 16 || check_ele(argv[1]) == 0)
	{
		write(1, "Error!\n", 7);
		return (0);
	}
	else
	{
		spr_input(row, col, argv[1]);
		if (check_problem(row) == 0 || check_problem(col) == 0
			|| check_corner(row, col) == 0)
		{
			write(1, "Error!\n", 7);
			return (0);
		}
		max_min_add(row, col, ans);
		backtrack(ans, 0, 0, row, col);
	}
	ft_ans(ans);
	return (0);
}

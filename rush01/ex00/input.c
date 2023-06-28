/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkaolim <pkaolim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 22:44:45 by pkaolim           #+#    #+#             */
/*   Updated: 2023/06/18 23:26:18 by pkaolim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	sign;
	int	nbr;

	sign = 1;
	nbr = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
	{
		str++;
	}
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nbr = nbr * 10 + (*str - '0');
		str++;
	}
	return (nbr * sign);
}

void	fill_zero_ans(int str[4][4])
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			str[i][j] = 0;
			j++;
		}
		j = 0;
		i++;
	}
}

int	check_ele(char *arr)
{
	int	i;

	i = 0;
	while (arr[i] != '\0')
	{
		if ((arr[i] < '1' || arr[i] > '4') || arr[i] == ' ')
		{
			return (0);
		}
		else if (i == 30 && arr[i + 1] == '\0'
			&& (arr[i] >= '1' && arr[i] <= '4'))
			return (1);
		i = i + 2;
	}
	return (0);
}

int	ft_strlen(char *arr)
{
	int	len;
	int	j;

	j = 0;
	len = 0;
	while (arr[len] != '\0')
	{
		if (arr[len] != ' ')
		{
			j++;
		}
		len++;
	}
	if (arr[len - 1] == ' ')
		return (0);
	return (j);
}

void	spr_input(int (*row)[4], int (*col)[4], char *input)
{
	int	i;
	int	j;

	i = -1;
	j = 0;
	while (++i < 8)
	{
		if (i < 4)
			col[0][i % 4] = ft_atoi(&input[j]);
		else
			col[1][i % 4] = ft_atoi(&input[j]);
		j += 2;
	}
	i = -1;
	while (++i < 8)
	{
		if (i < 4)
			row[0][i % 4] = ft_atoi(&input[j]);
		else
			row[1][i % 4] = ft_atoi(&input[j]);
		j += 2;
	}
}

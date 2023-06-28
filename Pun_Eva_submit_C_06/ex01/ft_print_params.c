/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pumungka <pumungka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 12:35:25 by pumungka          #+#    #+#             */
/*   Updated: 2023/06/23 22:58:44 by pumungka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	j = 1;
	i = 0;
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

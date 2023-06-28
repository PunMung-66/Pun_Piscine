/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pumungka <pumungka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 12:16:46 by pumungka          #+#    #+#             */
/*   Updated: 2023/06/23 22:59:33 by pumungka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	argc = 0;
	while (argv[argc][i] != '\0')
	{
		write(1, &(argv[argc][i]), 1);
		i++;
	}
	write(1, "\n", 1);
}

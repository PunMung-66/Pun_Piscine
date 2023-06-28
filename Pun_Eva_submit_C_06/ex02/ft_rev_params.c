/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pumungka <pumungka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 12:44:05 by pumungka          #+#    #+#             */
/*   Updated: 2023/06/22 17:45:30 by pumungka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	n;

	n = 0;
	if (argc > 1)
	{
		while (argc > 1)
		{
			while (argv[argc - 1][n] != '\0')
			{
				write(1, &argv[argc - 1][n], 1);
				n++;
			}
			write(1, "\n", 1);
			n = 0;
			argc--;
		}
	}
}

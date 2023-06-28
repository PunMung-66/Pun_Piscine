/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakitwo <thakitwo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 16:30:11 by rthokaeo          #+#    #+#             */
/*   Updated: 2023/06/12 16:02:04 by rthokaeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);

int		strtoint(char *str);

int	main(int agrv, char **agrc)
{
	int	x;
	int	y;

	x = strtoint(agrc[1]);
	y = strtoint(agrc[2]);
	rush(x, y);
	return (0);
}

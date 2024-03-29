/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pumungka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 11:14:04 by pumungka          #+#    #+#             */
/*   Updated: 2023/06/14 11:20:44 by pumungka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	result;

	result = 1;
	while (*str)
	{
		if ('A' > *str || *str > 'Z')
		{
			return (0);
		}
		str++;
	}
	return (result);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pumungka <pumungka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 10:51:14 by pumungka          #+#    #+#             */
/*   Updated: 2023/06/17 10:51:15 by pumungka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*pos;
	unsigned int	i;

	i = 0;
	pos = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src && i < nb)
	{
		*dest = *src;
		src++;
		dest++;
		i++;
	}
	*dest = '\0';
	return (pos);
}
/*
int	main(void)
{
    char str2[6] = "World   ";
    char str1[20] = "Hello";

    printf("%s\n",strncat(str1 , str2 , 5));
    //printf("%s",ft_strncat(str1 , str2 , 5));
}*/
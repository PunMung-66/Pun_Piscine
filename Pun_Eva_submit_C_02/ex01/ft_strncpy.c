/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pumungka <pumungka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 09:42:26 by pumungka          #+#    #+#             */
/*   Updated: 2023/06/24 14:09:52 by pumungka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char*dest, char*src, unsigned int n)
{
	unsigned int	c;

	c = 0;
	while (c < n && src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}
#include <stdio.h>
int	main(void)
{
	char dest[] = "defghijk";
	char src[] = "abc";
	char *ptr;

	ptr = dest;
	ptr = ft_strncpy(dest, src, 2);
	printf("%c\n", dest[0]);
	printf("%c\n", dest[1]);
	printf("%c\n", dest[2]);
	printf("%c\n", dest[3]);
	printf("%c\n", dest[4]);
	printf("%c\n", dest[5]);
}

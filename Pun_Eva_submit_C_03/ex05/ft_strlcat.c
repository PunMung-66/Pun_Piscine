/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pumungka <pumungka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 15:49:48 by pumungka          #+#    #+#             */
/*   Updated: 2023/06/20 9:20:28 by pumungka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
unsigned int str_len(char *str)
{
	unsigned int i;
	
	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_size;
	unsigned int 	src_size;

	i = 0;
	src_size = 0;
	dest_size = str_len(dest);
	/*initial length of dst*/
	while (*dest)
	{
		dest++;
	}
	/*plus the length of src*/
	while (*src != '\0' && i < (size))
	{
		*dest = *src;
		src++;
		src_size++;
		dest++;
		i++;
	}
	
	*dest = '\0';/*guarantee to NUL-terminate*/
	return (src_size + dest_size);
}


// int	main(void)
// {
//     char src[] = "08896";
//     char dest[] = "1337 42yt";

// 	char src2[] = "08896";
//     char dest2[] = "1337 42yt";

//     printf("%u\n", ft_strlcat(dest , src , 0));
// 	printf("%s\n", dest);
//     printf("%lu\n",strlcat( dest2, src2 , 0));
// 	printf("%s\n", dest2);
// }
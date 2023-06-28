/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pumungka <pumungka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 10:15:15 by pumungka          #+#    #+#             */
/*   Updated: 2023/06/26 16:24:18 by pumungka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	len_allocate(int size, char **strs, char *sep)
{
	int	len;
	int	i;
	int	n;

	len = 0;
	n = 0;
	while (n < size)
	{
		i = 0;
		while (strs[n][i++])
			len++;
		i = 0;
		while (sep[i++] && (n + 1) < size)
			len++;
		n++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*arr;
	int		n;
	int		i;
	int		c;

	n = 0;
	c = 0;
	arr = (char *)malloc((len_allocate(size, strs, sep) + 1) * sizeof(char));
	if (arr == NULL)
		return (NULL);
	while (n < size)
	{
		i = 0;
		while (strs[n][i])
			arr[c++] = strs[n][i++];
		i = 0;
		while (sep[i] && n + 1 < size)
			arr[c++] = sep[i++];
		n++;
	}
	arr[c] = '\0';
	return (arr);
}

/*
int	main(void)
{
    char *test[5] = {"test1" , "test2" , "test3" , "test4"}; 
    printf("%s", ft_strjoin(4 ,test, " "));
}*/
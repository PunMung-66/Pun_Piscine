/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pumungka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 10:47:50 by pumungka          #+#    #+#             */
/*   Updated: 2023/06/17 10:47:56 by pumungka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if ((*s1 == '\0' && *s2 == '\0') || n <= 0)
	{
		return (0);
	}
	while (s1[i] == s2[i] && i < (n - 1))
	{
		if (s1[i] == '\0' || s2[i] == '\0')
		{
			return (0);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char	s1[];
	char	s2[];

  s1[] = "Pannawat";
  s2[] = "Pana";
  printf("%d", ft_strncmp(s1, s2, 3));
  //printf("%d", strncmp(s1, s2));
}
*/

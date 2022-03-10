/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbeffa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 16:46:08 by vbeffa            #+#    #+#             */
/*   Updated: 2021/01/18 20:47:43 by vbeffa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		inizio(const char *s1, const char *set)
{
	int		x;
	int		y;

	x = 0;
	y = 0;
	while (s1[x] && set[y])
	{
		while (s1[x] != set[y] && set[y])
			y++;
		if (s1[x] == set[y])
		{
			y = 0;
			x++;
		}
	}
	return (x);
}

int		fine(const char *s1, const char *set)
{
	int z;
	int x;
	int y;

	x = inizio(s1, set);
	y = 0;
	z = (ft_strlen(s1) - 1);
	while (z > x && set[y])
	{
		while (s1[z] != set[y] && set[y])
			y++;
		if (s1[z] == set[y])
		{
			y = 0;
			z--;
		}
	}
	return (z);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*sf;
	int		x;
	int		y;
	int		z;

	if (s1 == NULL)
		return (NULL);
	x = inizio(s1, set);
	y = 0;
	z = fine(s1, set);
	if ((sf = (char *)malloc((z - x + 2))) == NULL)
		return (NULL);
	while (x <= z)
	{
		sf[y] = s1[x];
		x++;
		y++;
	}
	sf[y] = '\0';
	return (sf);
}

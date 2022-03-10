/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbeffa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 15:37:02 by vbeffa            #+#    #+#             */
/*   Updated: 2021/01/18 20:42:10 by vbeffa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*app;
	int		x;
	int		y;

	x = 0;
	y = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	if ((app = (char *)malloc(ft_strlen(s1) + ft_strlen(s2))) == NULL)
		return (NULL);
	while (s1[x])
	{
		if (s1[x] == 0)
			return (NULL);
		app[y++] = s1[x++];
	}
	x = 0;
	while (s2[x])
	{
		if (s2[x] == 0)
			return (NULL);
		app[y++] = s2[x++];
	}
	app[y] = '\0';
	return (app);
}

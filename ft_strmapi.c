/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbeffa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 11:16:54 by vbeffa            #+#    #+#             */
/*   Updated: 2021/01/20 11:36:06 by vbeffa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	x;
	char			*fin;

	x = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	if ((fin = malloc(ft_strlen(s) + 1)) == NULL)
		return (NULL);
	while (s[x])
	{
		fin[x] = (*f)(x, s[x]);
		x++;
	}
	fin[x] = '\0';
	return (fin);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbeffa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 14:06:22 by vbeffa            #+#    #+#             */
/*   Updated: 2021/01/12 20:23:32 by vbeffa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	x;
	size_t	y;
	size_t	z;

	x = 0;
	y = 0;
	z = 0;
	while (dest[x] != '\0')
		x++;
	while (src[y] != '\0')
	{
		y++;
	}
	if (size <= x)
		y = y + size;
	else
		y = y + x;
	while (src[z] != '\0' && (x + 1) < size)
	{
		dest[x] = src[z];
		x++;
		z++;
	}
	dest[x] = '\0';
	return (y);
}

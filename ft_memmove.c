/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbeffa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 14:16:51 by vbeffa            #+#    #+#             */
/*   Updated: 2021/01/18 18:47:44 by vbeffa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t					x;
	const unsigned char		*nsrc;
	unsigned char			*ndest;

	nsrc = src;
	ndest = dest;
	if (ndest < nsrc)
	{
		x = 0;
		while (x < len)
		{
			ndest[x] = nsrc[x];
			x++;
		}
	}
	else if (ndest > nsrc)
	{
		x = len;
		while (x > 0)
		{
			ndest[x - 1] = nsrc[x - 1];
			x--;
		}
	}
	return (dest);
}

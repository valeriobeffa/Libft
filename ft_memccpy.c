/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbeffa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 12:31:45 by vbeffa            #+#    #+#             */
/*   Updated: 2021/01/18 17:09:37 by vbeffa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t len)
{
	size_t	x;

	x = 0;
	while (x < len)
	{
		if (*(unsigned char *)(src + x) == (unsigned char)c)
		{
			*(unsigned char *)(dest + x) = *(unsigned char *)(src + x);
			return (dest + x + 1);
		}
		*(unsigned char *)(dest + x) = *(unsigned char *)(src + x);
		x++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbeffa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 16:45:06 by vbeffa            #+#    #+#             */
/*   Updated: 2021/01/18 17:00:19 by vbeffa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	size_t x;

	x = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (x < len)
	{
		*(unsigned char *)(dest + x) = *(unsigned char *)(src + x);
		x++;
	}
	return (dest);
}

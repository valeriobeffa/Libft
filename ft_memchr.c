/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbeffa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 15:22:19 by vbeffa            #+#    #+#             */
/*   Updated: 2021/01/18 14:58:09 by vbeffa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	x;

	x = 0;
	while (x < n)
	{
		if ((unsigned char)c == *(unsigned char *)(s + x))
			return ((void *)s + x);
		else
			x++;
	}
	return (NULL);
}

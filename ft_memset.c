/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbeffa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 15:57:56 by vbeffa            #+#    #+#             */
/*   Updated: 2021/01/18 18:57:53 by vbeffa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int x, size_t len)
{
	size_t	y;

	y = 0;
	while (y < len)
	{
		*(unsigned char *)(str + y) = (unsigned char)x;
		y++;
	}
	return (str);
}

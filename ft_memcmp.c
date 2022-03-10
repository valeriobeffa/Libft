/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbeffa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 18:46:10 by vbeffa            #+#    #+#             */
/*   Updated: 2021/01/18 15:01:24 by vbeffa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	x;

	x = 0;
	if (n == 0)
		return (0);
	while (x < n && *(unsigned char *)(s1 + x) == (*(unsigned char *)(s2 + x)))
	{
		x++;
		if (x == n)
			return (0);
	}
	return (*(unsigned char *)(s1 + x) - (*(unsigned char *)(s2 + x)));
}

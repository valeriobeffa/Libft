/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbeffa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 11:48:48 by vbeffa            #+#    #+#             */
/*   Updated: 2021/01/18 19:32:51 by vbeffa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	x;
	size_t	y;

	x = 0;
	if (str == NULL && to_find == NULL)
		return (0);
	if (*to_find == '\0')
	{
		return ((char *)str);
	}
	while (*(str + x) && x < len)
	{
		y = 0;
		while (str[x + y] == to_find[y] && (x + y) <= len)
		{
			if (to_find[y + 1] == '\0')
			{
				return ((char *)str + x);
			}
			y++;
		}
		x++;
	}
	return (0);
}

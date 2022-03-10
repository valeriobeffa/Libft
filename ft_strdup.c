/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbeffa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 13:55:02 by vbeffa            #+#    #+#             */
/*   Updated: 2021/01/18 15:10:22 by vbeffa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*copy;
	int		x;

	x = 0;
	if (!(copy = (char *)malloc((ft_strlen(src) + 1) * sizeof(char))))
		return (copy);
	while (src[x] != '\0')
	{
		copy[x] = src[x];
		x++;
	}
	copy[x] = '\0';
	return (copy);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbeffa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 14:07:52 by vbeffa            #+#    #+#             */
/*   Updated: 2021/01/12 20:26:20 by vbeffa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const char	*ptr1;
	const char	*ptr2;

	ptr1 = s1;
	ptr2 = s2;
	while (*ptr1 && *ptr1 == *ptr2 && n)
	{
		ptr1++;
		ptr2++;
		n--;
	}
	if (n > 0)
		return ((unsigned char)*ptr1 - (unsigned char)*ptr2);
	else
		return (0);
}

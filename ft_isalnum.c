/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbeffa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 14:57:10 by vbeffa            #+#    #+#             */
/*   Updated: 2021/01/11 14:59:02 by vbeffa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalnum(int x)
{
	if (x > 47 && x < 58)
		return (1);
	if (x > 64 && x < 91)
		return (1);
	if (x > 96 && x < 123)
		return (1);
	return (0);
}

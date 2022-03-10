/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbeffa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 20:14:11 by vbeffa            #+#    #+#             */
/*   Updated: 2021/01/18 20:15:27 by vbeffa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count(int n)
{
	int		x;
	int		y;

	x = n;
	y = 1;
	if (x < 0 && x > -2147483648)
	{
		x = -x;
	}
	while (x > 0)
	{
		x = x / 10;
		y++;
	}
	return (y);
}

char	*ft_neg(int n)
{
	char	*a;
	int		x;

	n = -n;
	x = ft_count(n) + 1;
	if ((a = (char *)malloc(x)) == NULL)
		return (NULL);
	a[x - 1] = '\0';
	while (x > 2)
	{
		a[x - 2] = (n % 10) + 48;
		n = n / 10;
		x--;
	}
	a[0] = '-';
	return (a);
}

char	*ft_pos(int n)
{
	char	*a;
	int		x;

	x = ft_count(n);
	if ((a = (char *)malloc(x)) == NULL)
		return (NULL);
	a[x - 1] = '\0';
	while (x > 1)
	{
		a[x - 2] = (n % 10) + 48;
		n = n / 10;
		x--;
	}
	return (a);
}

char	*ft_min(int n)
{
	char	*a;
	int		x;
	int		y;

	x = 9;
	y = n + 1;
	y = -y / 10;
	if ((a = (char *)malloc(12)) == NULL)
		return (NULL);
	a[11] = '\0';
	a[10] = '8';
	while (x > 0)
	{
		a[x] = (y % 10) + 48;
		y = y / 10;
		x--;
	}
	a[0] = '-';
	return (a);
}

char	*ft_itoa(int n)
{
	char	*a;

	a = 0;
	if (n < 0 && n > -2147483648)
		a = ft_neg(n);
	else if (n > 0)
		a = ft_pos(n);
	else if (n == 0)
	{
		if ((a = (char *)malloc(2)) == NULL)
			return (NULL);
		a[0] = '0';
		a[1] = '\0';
	}
	else if (n == -2147483648)
		a = ft_min(n);
	return (a);
}

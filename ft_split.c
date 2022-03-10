/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbeffa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 15:33:33 by vbeffa            #+#    #+#             */
/*   Updated: 2021/01/20 15:34:09 by vbeffa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_counter(char const *s, char c)
{
	int count;
	int i;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else if (s[i] != c)
		{
			while (s[i] && s[i] != c)
				i++;
			count++;
		}
	}
	return (count);
}

static	int		ft_sizeword(char const *s, char c, int i)
{
	int count;
	int k;

	count = 0;
	k = i;
	while (s[k] != c && s[k])
	{
		count++;
		k++;
	}
	return (count);
}

static	char	**ft_cut_split(char const *s, char c, int i, char **arr)
{
	int k;
	int t;

	k = 0;
	t = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			if (!(arr[t] = (char *)malloc(sizeof(char)
				* (ft_sizeword(s, c, i) + 1))))
				return (NULL);
			while (s[i] && s[i] != c)
				arr[t][k++] = s[i++];
			arr[t++][k] = '\0';
			k = 0;
		}
		else
			i++;
	}
	arr[t] = NULL;
	return (arr);
}

char			**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;

	if (s == NULL || !(arr = (char **)malloc(sizeof(char *) *
		(ft_counter(s, c) + 1))))
		return (NULL);
	i = 0;
	ft_cut_split(s, c, i, arr);
	return (arr);
}

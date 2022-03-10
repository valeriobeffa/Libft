/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbeffa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 14:22:13 by vbeffa            #+#    #+#             */
/*   Updated: 2021/01/18 20:24:16 by vbeffa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char			*app;
	unsigned int	i;
	unsigned int	j;
	unsigned int	mem;

	if (s == NULL)
		return (NULL);
	if ((ft_strlen(s) - start) > len)
		mem = len;
	else
		mem = ft_strlen(s) - start;
	if ((app = (char*)malloc(len + 1)) == NULL)
		return (NULL);
	j = 0;
	i = 0;
	while (s[i] && i < start)
		i++;
	while (s[i] && j < len)
		app[j++] = s[i++];
	app[j] = '\0';
	return (app);
}

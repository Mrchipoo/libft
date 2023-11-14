/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echoubby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:55:33 by echoubby          #+#    #+#             */
/*   Updated: 2023/11/04 12:51:25 by echoubby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	count(size_t len, int start, size_t tol)
{
	if (tol - start <= len)
		len = tol - start;
	return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*subs;
	size_t	tol;

	i = 0;
	if (!s)
		return (0);
	tol = ft_strlen(s);
	if (start >= tol)
	{
		subs = "";
		return (ft_strdup(subs));
	}
	len = count(len, start, tol);
	subs = malloc((len + 1) * sizeof(char));
	if (subs == NULL)
		return (0);
	while (i < len && s[start + i] != '\0')
	{
		subs[i] = s[start + i];
		i++;
	}
	subs[i] = '\0';
	return (subs);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echoubby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:00:35 by echoubby          #+#    #+#             */
/*   Updated: 2023/11/09 11:01:20 by echoubby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	found(char const *s, char const c)
{
	while (*s)
	{
		if (*s == c)
			return (1);
		s++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		first;
	int		last;
	char	*b;

	if (!s1)
		return (0);
	last = ft_strlen(s1);
	first = 0;
	b = (char *)s1;
	b = malloc((last + 1) * sizeof(char));
	if (b == NULL)
		return (0);
	while (first++ <= last)
		if (found(set, s1[first]))
			break ;
	if (last == first)
	{
		b = '\0';
		return (ft_strdup(b));
	}
	while (last-- > first)
		if (found(set, s1[last - 1]))
			break ;
	return (b = ft_substr(s1, first, last - first));
}

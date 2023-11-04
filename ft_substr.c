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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*subs;
	size_t	tol;
	size_t	sub_len;

	i = 0;
	tol = ft_strlen(s);
	sub_len = tol - start;
	if (!s)
		return (0);
	if (len > sub_len)
		len = sub_len;
	if (start >= tol)
		return (0);
	subs = ft_calloc(len + 1, sizeof(char));
	while (i < len)
	{
		subs[i] = s[start + i];
		i++;
	}
	subs[i] = '\0';
	return (subs);
}

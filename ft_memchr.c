/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echoubby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:01:40 by echoubby          #+#    #+#             */
/*   Updated: 2023/11/03 13:38:58 by echoubby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*b;

	if (!s || !c)
		return ;
	b = (const char *)s;
	i = 0;
	while (i < n)
	{
		if (b[i] == c)
		{
			return ((void *)b + i);
		}
		i++;
	}
	return (NULL);
}

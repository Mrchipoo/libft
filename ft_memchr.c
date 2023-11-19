/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echoubby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:01:40 by echoubby          #+#    #+#             */
/*   Updated: 2023/11/09 10:54:58 by echoubby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*b;

	if (!s)
		return (NULL);
	b = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (b[i] == (unsigned char )c)
		{
			return ((void *)b + i);
		}
		i++;
	}
	return (NULL);
}

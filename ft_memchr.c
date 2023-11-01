/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echoubby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:01:40 by echoubby          #+#    #+#             */
/*   Updated: 2023/10/31 18:41:44 by echoubby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t					i;
	const unsigned char		*a;
	const void	*b;

	i = 0;
	a = (const unsigned char *)s;
	while (i < n)
	{
		if (a[i] == c)
		{
			b = &a[i];
			return ((void *)b);
		}
		i++;
	}
	return (NULL);
}

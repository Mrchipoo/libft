/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echoubby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:10:09 by echoubby          #+#    #+#             */
/*   Updated: 2023/11/02 20:16:40 by echoubby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
void	*memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char *dst;
	unsigned char *sors;

	dst = (unsigned char *)dest;
	sors = (unsigned char *)src;
	i = n - 1;
	if (dest > src)
	{
		while (i >= 0)
		{
			dst[i] = sors[i];
			if (i == 0)
				return (dest);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			dst[i] = sors[i];
			i++;
		}
	}
	return (dst);
}

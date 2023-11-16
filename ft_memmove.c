/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echoubby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:10:09 by echoubby          #+#    #+#             */
/*   Updated: 2023/11/09 10:57:54 by echoubby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (dest > src && n > 0)
	{
		i = n - 1;
		while (src && i > 0)
		{
			*((unsigned char *) dest + i) = *((unsigned char *) src + i);
			i--;
		}
		*((unsigned char *) dest + i) = *((unsigned char *) src + i);
		if (i == 0)
			return (dest);
	}
	else
	{
		dest = ft_memcpy(dest, src, n);
	}
	return (dest);
}

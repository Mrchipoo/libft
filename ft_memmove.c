/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echoubby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:10:09 by echoubby          #+#    #+#             */
/*   Updated: 2023/11/03 12:41:11 by echoubby         ###   ########.fr       */
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
		while (i > 0)
		{
			*((unsigned char *) dest + i) = *((unsigned char *) src + i);
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
			*((unsigned char *) dest + i) = *((unsigned char *) src + i);
			i++;
		}
	}
	return (dest);
}

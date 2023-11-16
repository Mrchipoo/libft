/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echoubby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:12:49 by echoubby          #+#    #+#             */
/*   Updated: 2023/11/09 10:56:58 by echoubby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*u1;
	unsigned char	*u2;

	i = 0;
	if (dest == src)
		return (dest);
	u1 = (unsigned char *)dest;
	u2 = (unsigned char *)src;
	while (src && i < n)
	{
		u1[i] = u2[i];
		i++;
	}
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echoubby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:12:49 by echoubby          #+#    #+#             */
/*   Updated: 2023/10/31 19:48:27 by echoubby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*u1;
	const unsigned char	*u2;

	i = 0;
	if (!u1 && !u2)
		return (0);
	u1 = (unsigned char *)dest;
	u2 = (const unsigned char *)src;
	while (i < n)
	{
		u1[i] = u2[i];
		i++;
	}
	return (dest);
}

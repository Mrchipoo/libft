/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echoubby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:36:21 by echoubby          #+#    #+#             */
/*   Updated: 2023/10/31 15:04:52 by echoubby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*u1;
	const unsigned char	*u2;

	i = 0;
	if (!s1 || !s2)
		return (0);
	u1 = (const unsigned char *)s1;
	u2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (u1[i] == u2[i])
			i++;
		else
			break ;
	}
	return (u1[i] - u2[i]);
}

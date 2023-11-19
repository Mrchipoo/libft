/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echoubby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:08:14 by echoubby          #+#    #+#             */
/*   Updated: 2023/10/31 17:31:44 by echoubby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		*u1;

	i = 0;
	u1 = (unsigned char *)s;
	while (i < n)
	{
		u1[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

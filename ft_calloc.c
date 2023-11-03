/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echoubby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:22:12 by echoubby          #+#    #+#             */
/*   Updated: 2023/11/03 10:21:31 by echoubby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	*a;
	size_t	i;

	i = 0;
	if (size == 0 || nmemb == 0)
		return (NULL);
	a = (size_t *)malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	while (i < size)
	{
		a[i] = 0;
		i++;
	}
	return ((void *)a);
}

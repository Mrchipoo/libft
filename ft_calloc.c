/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echoubby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:22:12 by echoubby          #+#    #+#             */
/*   Updated: 2023/11/01 18:22:46 by echoubby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*b;
	size_t	*a;
	size_t	i;

	a = (void *)b;
	i = 0;
	if (size == 0 || nmemb == 0)
		return (NULL);
	a = (size_t *)malloc(sizeof(size_t) * size);
	if (a == NULL)
		return (NULL);
	while (i < size)
	{
		a[i] = 0;
		i++;
	}
	return (b);
}

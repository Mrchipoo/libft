/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echoubby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:22:12 by echoubby          #+#    #+#             */
/*   Updated: 2023/11/06 10:52:41 by echoubby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*a;
	size_t	len;

	len = nmemb * size;
	if (nmemb && len / nmemb != size)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	ft_bzero(a, size * nmemb);
	return (a);
}

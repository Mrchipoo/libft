/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echoubby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:52:03 by echoubby          #+#    #+#             */
/*   Updated: 2023/11/09 11:02:47 by echoubby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n <= 0)
		return (0);
	while (s1[i] && s2[i] && n - 1 > 0)
	{
		if ((char unsigned)s1[i] - (char unsigned)s2[i] == 0)
		{
			i++;
			n--;
		}
		else
			break ;
	}
	return ((char unsigned)s1[i] - (char unsigned)s2[i]);
}

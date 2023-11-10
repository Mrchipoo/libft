/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echoubby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 20:29:21 by echoubby          #+#    #+#             */
/*   Updated: 2023/11/09 10:58:56 by echoubby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	a;

	i = ft_strlen(s);
	a = 0;
	while (a <= i)
	{
		if (s[a] == (char)c)
			return ((char *)s + a);
		a++;
	}
	return (0);
}

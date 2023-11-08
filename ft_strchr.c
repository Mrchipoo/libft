/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echoubby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 20:29:21 by echoubby          #+#    #+#             */
/*   Updated: 2023/10/31 10:49:23 by echoubby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*d;
	int		a;

	i = ft_strlen(s);
	a = 0;
	while (a <= i)
	{
		if (s[a] == c)
		{
			d = (char *)&s[a];
			return (d);
		}
		a++;
	}
	return (0);
}

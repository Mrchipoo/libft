/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echoubby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:31:46 by echoubby          #+#    #+#             */
/*   Updated: 2023/11/02 16:47:31 by echoubby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*d;

	i = ft_strlen(s);
	while (s[i] && i >= 0)
	{
		if (s[i] == c)
		{
			d = (char *)&s[i];
			return (d);
		}
		i--;
	}
	return (NULL);
}

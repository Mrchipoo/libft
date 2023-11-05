/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echoubby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:51:35 by echoubby          #+#    #+#             */
/*   Updated: 2023/11/05 20:18:49 by echoubby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		tol;
	int		j;
	char	*b;

	i = 0;
	j = 0;
	tol = ft_strlen(s1) + ft_strlen(s2);
	b =ft_calloc(tol + 1,sizeof(char));
	while (s1[i] && i < tol)
	{
		b[i] = s1[i];
		i++;
	}
	while (s2[j] && i < tol)
	{
		b[i] = s2[j];
		j++;
		i++;
	}
	b[i] = '\0';
	return (b);
}

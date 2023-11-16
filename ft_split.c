/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echoubby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:57:45 by echoubby          #+#    #+#             */
/*   Updated: 2023/11/16 15:26:06 by echoubby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	allocating(char **str, int index, int len)
{
	int	i;

	i = 0;
	str[index] = malloc(len);
	if (str == NULL)
	{
		while (i < index)
			free(str[i++]);
		free(str);
		return (1);
	}
	return (0);
}

static int	ft_write(char **str, char const *s, char c)
{
	int	j;
	int	index;

	index = 0;
	while (*s)
	{
		j = 0;
		while (*s == c)
			s++;
		while (*s && *s != c)
		{
			j++;
			s++;
		}
		if (j > 0)
		{
			if (allocating(str, index, j + 1))
				return (1);
		}
		ft_strlcpy(str[index], s - j, j + 1);
		index++;
	}
	return (0);
}

static int	count(char const *s, char sep)
{
	size_t	i;
	int		count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == sep)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != sep)
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		len;

	len = count(s, c);
	str = malloc((len + 1) * sizeof(char *));
	if (!str || !s)
		return (NULL);
	str[len] = NULL;
	if (ft_write(str, s, c))
		return (NULL);
	return (str);
}

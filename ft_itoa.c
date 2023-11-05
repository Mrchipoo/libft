/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echoubby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:13:13 by echoubby          #+#    #+#             */
/*   Updated: 2023/11/05 18:05:50 by echoubby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	len(int n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		tol;
	char	*b;

	tol = 0;
	if (n < 0)
	{
		n *= -1;
		tol = len(n) + 1;
		b = ft_calloc(tol + 1, sizeof(char));
		b [tol - len(n) - 1] = '-';
	}
	else
	{
		tol = len(n);
		b = ft_calloc(tol + 1, sizeof(char));
	}
	b[tol] = '\0';
	tol--;
	while (n > 0)
	{
		b[tol] = (n % 10) + '0';
		n /= 10;
		tol--;
	}
	return (b);
}

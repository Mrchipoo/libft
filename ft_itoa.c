/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echoubby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:13:13 by echoubby          #+#    #+#             */
/*   Updated: 2023/11/07 17:39:54 by echoubby         ###   ########.fr       */
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

char	*n_negative(int c)
{
	char	*a;
	int		tol;

	if (c == -2147483648)
	{
		a = "-2147483648";
		return (a);
	}
	else
	{
		c *= -1;
		tol = len(c) + 1;
		a = malloc ((tol + 1) * sizeof(char));
		if (a == NULL)
			return (0);
		a[0] = '-';
		a[tol--] = '\0';
		while (c > 0)
		{
		a[tol] = (c % 10) + '0';
		c /= 10;
		tol--;
		}
	}
	return (a);
}

char	*ft_itoa(int n)
{
	int		tol;
	char	*b;

	tol = 0;
	if (n >= 0)
	{
		tol = len(n);
		b = malloc((tol + 1) * sizeof(char));
		if (b == NULL)
			return (0);
		b[tol--] = '\0';
		while (n > 0)
		{
			b[tol] = (n % 10) + '0';
			n /= 10;
			tol--;
		}
	}
	else
		b = n_negative(n);
	return (b);
}

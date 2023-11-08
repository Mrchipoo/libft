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

	i = 1;
	while (n / 10)
	{
		i++;
		n /= 10;
	}
	return (i);
}

void	*aloccate(int tol)
{
	void	*b;

	b = malloc((tol) * sizeof(char));
	if (b == NULL)
		return (NULL);
	return (b);
}

char	*n_negative(int c)
{
	int		tol;
	long	b;
	char	*a;

	b = (long)c;
	if (b == -2147483648)
	{
		tol = 11;
		b *= -1;
	}
	else
	{
		b *= -1;
		tol = len(b) + 1;
	}	
		a = aloccate(tol + 1);
		a[0] = '-';
		a[tol--] = '\0';
	while (tol > 0)
	{
		a[tol] = (b % 10) + '0';
		b /= 10;
		tol--;
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
		b = aloccate(tol + 1);
		b[tol--] = '\0';
		while (tol >= 0)
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

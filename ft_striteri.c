/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echoubby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:45:05 by echoubby          #+#    #+#             */
/*   Updated: 2023/11/07 11:50:31 by echoubby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;
	int	tol;

	i = 0;
	tol = ft_strlen(s);
	s = ft_calloc(s + 1, sizeof(char));
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

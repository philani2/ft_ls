/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgumede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 10:01:49 by bgumede           #+#    #+#             */
/*   Updated: 2018/08/20 08:13:34 by bgumede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

static size_t	ft_numbers(int n)
{
	size_t		i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char			*ft_itoa(int n)
{
	char			*s;
	size_t			len;
	unsigned int	altn;

	altn = n;
	len = ft_numbers(n);
	if (n < 0)
	{
		altn = -n;
		len++;
	}
	if (!(s = ft_strnew(len)))
		return (NULL);
	s[--len] = altn % 10 + '0';
	while (altn /= 10)
		s[--len] = altn % 10 + '0';
	if (n < 0)
		*(s + 0) = '-';
	return (s);
}

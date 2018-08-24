/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgumede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 11:10:51 by bgumede           #+#    #+#             */
/*   Updated: 2018/08/20 08:08:00 by bgumede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

char	*ft_strnew(size_t size)
{
	char	*temp;
	size_t	i;

	i = 0;
	if (!(temp = malloc(sizeof(*temp) * (size + 1))))
		return (NULL);
	while (i <= size)
	{
		temp[i] = '\0';
		i++;
	}
	return (temp);
}

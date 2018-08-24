/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgumede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 15:09:41 by bgumede           #+#    #+#             */
/*   Updated: 2018/08/21 07:52:55 by bgumede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int		main(int argc, char **argv)
{
	int		i;
	t_env	e;
	t_dir	*temp;

	i = 1;
	e.list = NULL;
	while (i < argc)
	{
		if (argv[i][0] != '-' && (temp = (t_dir *)malloc(sizeof(t_dir))))
		{
			temp->dir = argv[i];
			temp->next = e.list;
			e.list = temp;
			ft_putstr("ft_ls: ");
			ft_putstr(argv[i]);
			ft_putendl(": No such file or directory");
		}
		else if (add_args(&e, argv[i]) == 0)
			return (0);
		i++;
	}
	if (e.list == NULL)
		do_list(&e);
	ft_ls(&e);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 18:03:55 by qduperon          #+#    #+#             */
/*   Updated: 2016/10/04 15:56:12 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/wolf3d.h"

void	ft_parse_error(int ac, char **av)
{
	if (ac != 1)
		ft_error(av);
	else
		return ;
}

void	ft_error(char **av)
{
	int i;

	i = 1;
	ft_putstr("The program doesn't need ");
	while (av[i])
	{
		ft_putstr(av[i]);
		ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
	ft_putendl("Usage :");
	ft_putendl("./wolf3d");
	exit(0);
}

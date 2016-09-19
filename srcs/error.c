/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 18:03:55 by qduperon          #+#    #+#             */
/*   Updated: 2016/09/15 16:57:48 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

void	ft_parse_error(int ac, char **av)
{
	av[1][0] = 0;
	if (ac != 1)
		ft_error();
}

void	ft_error(void)
{
	ft_putendl("Usage :");
	ft_putendl("./wolf3d");
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pos.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/20 16:37:40 by qduperon          #+#    #+#             */
/*   Updated: 2016/09/26 17:27:07 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

t_pos		*ft_pos(void)
{
	static t_pos	pos = {22, 11.5};

	return (&pos);
}

void		set_posx(double x)
{
	ft_pos()->x = x;
}

void		set_posy(double y)
{
	ft_pos()->y = y;
}

double		ft_posx(void)
{
	return (ft_pos()->x);
}

double		ft_posy(void)
{
	return (ft_pos()->y);
}

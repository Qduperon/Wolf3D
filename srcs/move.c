/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 18:35:24 by qduperon          #+#    #+#             */
/*   Updated: 2016/09/21 20:49:14 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"
#define T t_speed

void		 ft_forward(t_env *e, float spe)
{
	if (e->move->forward)
	{
		if (MAP((int)(ft_posx() + (ft_dirx() * spe)), (int)ft_posy()) == 0)
			set_posx(ft_posx() + (ft_dirx() * spe));
		if (MAP((int)ft_posx(), (int)(ft_posy() + (ft_diry() * spe))) == 0)
			set_posy(ft_posy() + (ft_diry() * spe));
	}
	if (e->move->backward)
	{
		if (MAP((int)(ft_posx() - (ft_dirx() * spe)), (int)ft_posy()) == 0)
			set_posx(ft_posx() - (ft_dirx() * spe));
		if (MAP((int)ft_posx(), (int)(ft_posy() - (ft_diry() * spe))) == 0)
			set_posy(ft_posy() - (ft_diry() * spe));
	}
}

void		ft_turn(t_env *e)
{
	float	oldd;
	float	oldp;

	if (e->move->turn)
	{
		oldd = ft_dirx();
		set_dirx(oldd * cos(-e->move->T) - ft_diry() * sin(-e->move->T));
		set_diry(oldd * sin(-e->move->T) + ft_diry() * cos(-e->move->T));
		oldp = ft_planx();
		set_planx(oldp * cos(-e->move->T) - ft_plany() * sin(-e->move->T));
		set_plany(oldp * sin(-e->move->T) + ft_plany() * cos(-e->move->T));
	}
}

void		ft_side_step(t_env *e, float spe)
{
	if (e->move->right)
	{
		if (MAP((int)(ft_posx() + (ft_planx() * spe)), (int)ft_posy()) == 0)
			set_posx(ft_posx() + (ft_planx() * spe));
		if (MAP((int)ft_posx(), (int)(ft_posy() + (ft_plany() *spe))) == 0)
			set_posy(ft_posy() + (ft_plany() * spe));
	}
	if (e->move->left)
	{
		if (MAP((int)(ft_posx() - (ft_planx() * spe)), (int)ft_posy()) == 0)
			set_posx(ft_posx() - (ft_planx() * spe));
		if (MAP((int)ft_posx(), (int)(ft_posy() - (ft_plany() * spe))) == 0)
			set_posy(ft_posy() - (ft_plany() * spe));
	}
}

void		ft_move(t_env *e)
{
	float	speed;

	if (e->move->speed_up)
		speed = 0.2;
	else if (e->move->speed_down)
		speed = 0.01;
	else
		speed = 0.1;
	ft_forward(e, speed);
	ft_turn(e);
	ft_side_step(e, speed);
}

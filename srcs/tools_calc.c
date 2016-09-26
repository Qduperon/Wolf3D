/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_calc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 19:53:50 by qduperon          #+#    #+#             */
/*   Updated: 2016/09/26 17:18:03 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"
#define P perpwalldis

void	ft_vect(t_var *v)
{
	if (v->raydir.x < 0)
	{
		v->step.x = -1;
		v->sidedis.x = (v->raypos.x - v->map.x) * v->delta.x;
	}
	else
	{
		v->step.x = 1;
		v->sidedis.x = (v->map.x + 1.0 - v->raypos.x) * v->delta.x;
	}
	if (v->raydir.y < 0)
	{
		v->step.y = -1;
		v->sidedis.y = (v->raypos.y - v->map.y) * v->delta.y;
	}
	else
	{
		v->step.y = 1;
		v->sidedis.y = (v->map.y + 1.0 - v->raypos.y) * v->delta.y;
	}
}

void	ft_hit(t_var *v)
{
	while (v->hit == 0)
	{
		if (v->sidedis.x < v->sidedis.y)
		{
			v->sidedis.x += v->delta.x;
			v->map.x += v->step.x;
			v->side = 0;
		}
		else
		{
			v->sidedis.y += v->delta.y;
			v->map.y += v->step.y;
			v->side = 1;
		}
		if (MAP((int)v->map.x, (int)v->map.y) > 0)
			v->hit = 1;
	}
}

void	ft_verif(t_var *v)
{
	if (v->side == 0)
		v->P = ABS((v->map.x - v->raypos.x + \
					(1 - v->step.x) / 2) / v->raydir.x);
	else
		v->P = ABS((v->map.y - v->raypos.y + \
					(1 - v->step.y) / 2) / v->raydir.y);
	v->hauteur_c = ABS((int)(W / v->P));
	v->draw_s = (int)(-v->hauteur_c / 2 + W / 2);
	v->draw_e = (int)(v->hauteur_c / 2 + W / 2);
	if (v->draw_s < 0)
		v->draw_s = 0;
	if (v->draw_e >= W)
		v->draw_e = W - 1;
	v->y = v->draw_s;
}

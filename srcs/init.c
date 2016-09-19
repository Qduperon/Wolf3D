/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/15 17:25:00 by qduperon          #+#    #+#             */
/*   Updated: 2016/09/19 17:24:40 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

#define X delta.x
#define Y delta.y

void	ft_init_var(t_var *v)
{
	v->y = 0;
	v->hit = 0;
	v->camera.x = (2 * v->x / H) - 1;
	v->raypos.x = ft_posx();
	v->raypos.y = ft_posy();
	v->raydir.x = ft_dirx() + ft_planx() * v->camera.x;
	v->raydir.y = ft_diry() + ft_plany() * v->camera.x;
	v->map.x = (int)v->raypos.x;
	v->map.y = (int)v->raypos.y;
	v->X = sqrt(1 + (v->raydir.y * v->raydir.y) / (v->raydir.x * v->raydir.x));
	v->Y = sqrt(1 + (v->raydir.x * v->raydir.x) / (v->raydir.y * v->raydir.y));
}

t_move	*ft_init_move(void)
{
	t_move	*move;

	move = NULL;
	if (!((t_move *)malloc(sizeof(t_move *))))
		return (NULL);
	move->backward = 0;
	move->first = 1;
	move->forward = 0;
	move->left = 0;
	move->right = 0;
	move->turn = 0;
	return (move);
}

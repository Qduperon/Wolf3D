/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 16:59:39 by qduperon          #+#    #+#             */
/*   Updated: 2016/09/19 17:13:12 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

#define B backward
#define F forward
#define L left
#define R right

int		ft_expose(t_env *e)
{
	t_var	*v;

	v = NULL;
	if (!(t_var *)malloc(sizeof(t_var)))
		return (0);
	if (e->move->B || e->move->F || e->move->L || e->move->R || \
		   	e->move->turn || e->move->first)
	{
		ft_bzero(e->img->data, W * H * e->img->bpp / 8);
		ft_move(e);
		e->move->first = 0;
		v->x = 0;
		while (v->x < H)
		{
			ft_init_var(v);
			v->x++;
		}
	}
	mlx_put_image_to_window(e->mlx, e->win, e->img->img, 0, 0);
	free((void *)v);
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 19:38:16 by qduperon          #+#    #+#             */
/*   Updated: 2016/09/29 14:33:46 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

int		ft_key_hook(int keycode, t_env *e)
{
	t_move	*move;

	move = e->move;
	ft_move_hook(keycode, move);
	if (keycode == ECHAP)
		ft_exit();
	ft_speed_hook(keycode, move, e);
	if (keycode == SPACE)
		ft_music(e);
	return (1);
}

int		ft_key_hook2(int keycode, t_env *e)
{
	t_move	*move;

	move = e->move;
	if (keycode == UP)
		move->forward = 0;
	if (keycode == DOWN)
		move->backward = 0;
	if (keycode == LEFT)
		move->left = 0;
	if (keycode == RIGHT)
		move->right = 0;
	if (keycode == A)
	{
		move->turn = 0;
		move->t_speed = 0;
	}
	if (keycode == D)
	{
		move->turn = 0;
		move->t_speed = 0;
	}
	return (1);
}

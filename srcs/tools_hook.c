/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_hook.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 19:40:00 by qduperon          #+#    #+#             */
/*   Updated: 2016/09/28 19:56:24 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

int		ft_speed_hook(int keycode, t_move *move)
{
	if (keycode == SPEED_UP)
	{
		move->speed_up = 2;
		move->speed_down = 0;
	}
	if (keycode == SPEED_DOWN)
	{
		move->speed_up = 0;
		move->speed_down = 0.05;
	}
	if (keycode == NORMAL_SPE)
	{
		move->speed_up = 0;
		move->speed_down = 0;
	}
	return (1);
}

int		ft_move_hook(int keycode, t_move *move)
{
	if (keycode == UP)
		move->forward = 1;
	if (keycode == DOWN)
		move->backward = 1;
	if (keycode == LEFT)
		move->left = 1;
	if (keycode == RIGHT)
		move->right = 1;
	if (keycode == A)
	{
		move->t_speed = -0.1;
		move->turn = 1;
	}
	if (keycode == D)
	{
		move->t_speed = 0.1;
		move->turn = 1;
	}
	return (1);
}

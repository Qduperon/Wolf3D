/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 19:21:33 by qduperon          #+#    #+#             */
/*   Updated: 2016/09/26 19:55:17 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

int		ft_key_hook(int keycode, t_env *e)
{
	t_move	*move;

	move = e->move;
	if (keycode == UP)
		move->forward = 1;
	if (keycode == DOWN)
		move->backward = 1;
	if (keycode == LEFT)
		move->left = 1;
	if (keycode == RIGHT)
		move->right = 1;
	if (keycode == ECHAP)
		exit (0);
	if (keycode == MENU)
		e->display = (e->display == 1) ? 0 : 1;
	return (1);
}

int		ft_key_hook2(int keycode, t_env *e)
{
	t_move 	*move;

	move = e->move;
	if (keycode == UP)
		move->forward = 0;
	if (keycode == DOWN)
		move->backward = 0;
	if (keycode == LEFT)
		move->left = 0;
	if (keycode == RIGHT)
		move->right = 0;
	return (1);
}
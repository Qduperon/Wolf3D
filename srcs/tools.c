/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 16:53:09 by qduperon          #+#    #+#             */
/*   Updated: 2016/09/28 19:06:27 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

void		ft_display(t_env env)
{
	if (env.display == 1)
	{
		mlx_string_put(env.mlx, env.win, 5, 5, 0xFFFF00, "Controls Keys");
		mlx_string_put(env.mlx, env.win, 5, 22, 0xFFFFF, "Move = Arrows");
		mlx_string_put(env.mlx, env.win, 5, 39, 0xFFFFF, "Iterations = +/-");
		mlx_string_put(env.mlx, env.win, 5, 56, 0xFFFFF,\
				"Frequence = page up/down");
		mlx_string_put(env.mlx, env.win, 5, 73, 0xFFFFF, "Motion = Space");
		mlx_string_put(env.mlx, env.win, 5, 91, 0xFFFFF, "Color = C");
		mlx_string_put(env.mlx, env.win, 5, 108, 0xFFFFF,\
				"Reset = clear");
		mlx_string_put(env.mlx, env.win, 5, 125, 0xFFFFF,\
				"Change fractal = tab");
		mlx_string_put(env.mlx, env.win, 5, 142, 0xFFFFF,\
				"Hide/Display inputs = Return");
		mlx_string_put(env.mlx, env.win, W - 225, 5, 0xFFFF00,\
				"Controls Mouse");
		mlx_string_put(env.mlx, env.win, W - 275, 22, 0xFFFFF,\
				"Zoom/dezoom = Scroll/click");
		mlx_string_put(env.mlx, env.win, W - 175, H - 50,\
				0xFFFF00, "Fractal Name :");
	}
}

void		ft_exit(void)
{
	system("killall afplay");
	system("afplay musics/exit.mp3");
	exit(0);
}

int			ft_exit_cross(int keycode, t_env *e)
{
	(void)keycode;
	(void)e;
	system("killall afplay");
	system("afplay musics/exit.mp3");
	exit(0);
	return (0);
}

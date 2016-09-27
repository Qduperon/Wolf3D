/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 17:57:31 by qduperon          #+#    #+#             */
/*   Updated: 2016/09/27 19:00:13 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

int		main(int ac, char **av)
{
	t_env	env;
	t_img	img;

	ft_parse_error(ac, av);
	if (!(env.mlx = mlx_init()))
		return (-1);
	img.img = mlx_new_image(env.mlx, H, W);
	img.data = mlx_get_data_addr(img.img, &img.bpp, &img.size_line, \
			&img.endian);
	env.img = &img;
	env.win = mlx_new_window(env.mlx, H, W, "Wolf3D");
	env.move = ft_init_move();
	env.display = 1;
	//ft_display(env);
	mlx_expose_hook(env.win, ft_expose, &env);
	mlx_hook(env.win, 2, 1, ft_key_hook, &env);
	mlx_hook(env.win, 3, 2, ft_key_hook2, &env);
	mlx_hook(env.win, 17, (1L << 17), ft_exit_cross, 0);
	ft_display(env);
	mlx_loop_hook(env.mlx, ft_expose, &env);
	mlx_loop(env.mlx);
	return (0);
}

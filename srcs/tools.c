/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 19:55:36 by qduperon          #+#    #+#             */
/*   Updated: 2016/09/27 19:01:13 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

void		ft_display(t_env env)
{
	if (env.display == 1)
	{
		mlx_string_put(env.mlx, env.win, 100, 100, 0xFFFFFFF, "A Faire");
	}
}

int			ft_exit_cross(int keycode, t_env *e)
{
	(void)keycode;
	(void)e;
	exit(0);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 16:53:09 by qduperon          #+#    #+#             */
/*   Updated: 2016/10/04 15:58:59 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/wolf3d.h"

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

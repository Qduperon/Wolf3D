/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   music.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 18:24:59 by qduperon          #+#    #+#             */
/*   Updated: 2016/09/29 14:40:15 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

void	ft_music(t_env *env)
{
	if (env->music == 1)
	{
		system("killall afplay");
		system("afplay musics/nyan.mp3&");
		env->music = 2;
		return ;
	}
	if (env->music == 2)
	{
		system("killall afplay");
		system("afplay musics/tetris.mp3&");
		env->music = 3;
		return ;
	}
	ft_music2(env);
}

void	ft_music2(t_env *env)
{
	if (env->music == 3)
	{
		system("killall afplay");
		system("afplay musics/zelda.mp3&");
		env->music = 4;
		return ;
	}
	if (env->music == 4)
	{
		system("killall afplay");
		system("afplay musics/ff7.mp3&");
		env->music = 5;
		return ;
	}
	if (env->music == 5)
	{
		system("killall afplay");
		system("afplay musics/mario.mp3&");
		env->music = 1;
		return ;
	}
}

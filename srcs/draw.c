/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 20:20:12 by qduperon          #+#    #+#             */
/*   Updated: 2016/10/04 15:55:45 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/wolf3d.h"

void	mlx_pixel_to_image(t_img *img, int x, int y, int color)
{
	unsigned char	color1;
	unsigned char	color2;
	unsigned char	color3;

	color1 = color >> 0;
	color2 = color >> 8;
	color3 = color >> 16;
	img->data[y * img->size_line + x * img->bpp / 8] = color1;
	img->data[y * img->size_line + x * img->bpp / 8 + 1] = color2;
	img->data[y * img->size_line + x * img->bpp / 8 + 2] = color3;
}

void	ft_draw_all(t_env *e, t_var *v)
{
	if (v->draw_e < 0)
		v->draw_e = W;
	v->y = v->draw_e;
	while (v->y < W)
	{
		mlx_pixel_to_image(e->img, v->x, v->y, 0x25B700);
		mlx_pixel_to_image(e->img, v->x, W - v->y - 1, 0x101B0F0);
		v->y++;
	}
}

void	ft_draw(t_env *e, t_var *v)
{
	while (v->y < v->draw_e)
	{
		if (v->side == 1)
		{
			if (v->step.y > 0)
				mlx_pixel_to_image(e->img, v->x, v->y, 0xFF0000);
			else
				mlx_pixel_to_image(e->img, v->x, v->y, 0x0000FF);
		}
		else
		{
			if (v->step.x > 0)
				mlx_pixel_to_image(e->img, v->x, v->y, 0xE35875);
			else
				mlx_pixel_to_image(e->img, v->x, v->y, 0xFF000F);
		}
		v->y++;
	}
	ft_draw_all(e, v);
}

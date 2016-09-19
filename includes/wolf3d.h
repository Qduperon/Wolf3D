/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wolf3d.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 17:50:49 by qduperon          #+#    #+#             */
/*   Updated: 2016/09/19 17:22:48 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WOLF3D_H
# define WOLF3D_H

# include "../libft/includes/libft.h"
# include "../minilibx_macos/mlx.h"
# include <math.h>

# define W			720
# define H			720

# define ECHAP		53
# define UP			126
# define DOWN		125
# define RIGHT		124
# define LEFT		123
# define SPACE		49
# define MENU		36

typedef struct		s_position;
{
	int				x;
	int				y;
}					t_pos;

typedef struct		s_variable;
{
	float			x;
	float			y;
	int				side;
	t_pos			delta;
	t_pos			camera;
	t_pos			map;
	t_pos			raydir;
	t_pos			raypos;
	t_pos			sidedis;
	t_pos			step;
}					t_var;

typedef struct		s_img
{
	char			*data;
	int				bpp;
	int				endian;
	int				size_line;
	void			*img;
}					t_img;

typedef struct		s_move
{
	int				backward;
	int				first;
	int				forward;
	int				left;
	int				right;
	int				turn;
}					t_move;

typedef struct		s_env
{
	int				display;
	void			*mlx;
	void			*win;
	t_img			*img;
	t_move			*move;
}					t_env;

/*
** algo.c
*/
int					ft_expose(t_env *e);
/*
** error.c
*/
void				ft_parse_error(int ac, char **av);
void				ft_error(void);
/*
** init.c
*/
t_move				*ft_init_move(void);
void				ft_init_var(t_var *v);

#endif

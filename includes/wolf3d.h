/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wolf3d.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 17:50:49 by qduperon          #+#    #+#             */
/*   Updated: 2016/09/27 19:34:37 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WOLF3D_H
# define WOLF3D_H

# include "../libft/includes/libft.h"
# include "../minilibx_macos/mlx.h"
# include <math.h>

# define W			1000
# define H			1000

# define A			0
# define D			2
# define ECHAP		53
# define UP			126
# define DOWN		125
# define RIGHT		124
# define LEFT		123
# define SPACE		49
# define MENU		36

# define MAP		ft_map
# define ABS(x) 	(x < 0) ? -x : x

typedef struct		s_position
{
	double			x;
	double			y;
}					t_pos;

typedef struct		s_variable
{
	float			draw_e;
	float			draw_s;
	float			hauteur_c;
	float			perpwalldis;
	float			x;
	float			y;
	int				hit;
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
	float			speed_down;
	float			speed_up;
	float			t_speed;
	float			v;
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
** dir.c
*/
double				ft_dirx(void);
double				ft_diry(void);
t_pos				*ft_dir(void);
void				set_dirx(double x);
void				set_diry(double y);
/*
** draw.c
*/
void				mlx_pixel_to_image(t_img *img, int x, int y, int color);
void				ft_draw(t_env *e, t_var *v);
void				ft_draw(t_env *e, t_var *v);
/*
** error.c
*/
void				ft_parse_error(int ac, char **av);
void				ft_error(char **av);
/*
** hook.c
*/
int					ft_key_hook(int keycode, t_env *e);
int					ft_key_hook2(int keycode, t_env *e);
/*
** init.c
*/
t_move				*ft_init_move(void);
void				ft_init_var(t_var *v);
/*
** maps.c
*/
int					ft_map(int x, int y);
/*
** move.c
*/
void				ft_forward(t_env *e, float spe);
void				ft_move(t_env *e);
void				ft_side_step(t_env *e, float spe);
void				ft_turn(t_env *e);
/*
** plan.c
*/
double				ft_planx(void);
double				ft_plany(void);
t_pos				*ft_plan(void);
void				set_planx(double x);
void				set_plany(double y);
/*
** pos.c
*/
double				ft_posx(void);
double				ft_posy(void);
t_pos				*ft_pos(void);
void				set_posx(double x);
void				set_posy(double y);
/*
** tools.c
*/
int					ft_exit_cross(int keycode, t_env *e);
void				ft_display(t_env env);
/*
** tools_calc.c
*/
void				ft_hit(t_var *v);
void				ft_vect(t_var *v);
void				ft_verif(t_var *v);

#endif

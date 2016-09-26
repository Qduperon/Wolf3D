/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dir.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/20 16:23:17 by qduperon          #+#    #+#             */
/*   Updated: 2016/09/26 17:23:43 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

t_pos	*ft_dir(void)
{
	static t_pos	dir = {-1, 0};

	return (&dir);
}

void	set_dirx(double x)
{
	ft_dir()->x = x;
}

void	set_diry(double y)
{
	ft_dir()->y = y;
}

double	ft_dirx(void)
{
	return (ft_dir()->x);
}

double	ft_diry(void)
{
	return (ft_dir()->y);
}

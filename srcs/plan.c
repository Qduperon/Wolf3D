/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   plan.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/20 16:32:29 by qduperon          #+#    #+#             */
/*   Updated: 2016/09/26 17:23:15 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

t_pos		*ft_plan(void)
{
	static t_pos	plan = {0, 1};

	return (&plan);
}

void		set_planx(double x)
{
	ft_plan()->x = x;
}

void		set_plany(double y)
{
	ft_plan()->y = y;
}

double		ft_planx(void)
{
	return (ft_plan()->x);
}

double		ft_plany(void)
{
	return (ft_plan()->y);
}

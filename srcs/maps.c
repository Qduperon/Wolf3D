/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maps.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qduperon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 16:17:20 by qduperon          #+#    #+#             */
/*   Updated: 2016/10/04 15:57:04 by qduperon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/wolf3d.h"

int		ft_map(int x, int y)
{
	static char	map[24][24] = {{-1}};

	if (map[0][0] == -1)
		ft_memcpy(map, "\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\0\0"
				"\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\1\1\0\0\0\0\0\0\0\0\0"
				"\0\0\0\0\0\0\0\0\0\0\0\0\0\1\1\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
				"\0\0\0\0\0\0\1\1\0\0\0\0\0\2\2\2\2\2\0\0\0\0\3\0\3\0\3\0\0\0\1"
				"\1\0\0\0\0\0\2\0\0\0\2\0\0\0\0\0\0\0\0\0\0\0\0\1\1\0\0\0\0\0\2"
				"\0\0\0\2\0\0\0\0\3\0\0\0\3\0\0\0\1\1\0\0\0\0\0\2\0\0\0\2\0\0\0"
				"\0\0\0\0\0\0\0\0\0\1\1\0\0\0\0\0\2\2\0\2\2\0\0\0\0\3\0\3\0\3\0"
				"\0\0\1\1\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\1\1\0\0\0"
				"\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\1\1\0\0\0\0\0\0\0\0\0\0"
				"\0\0\0\0\0\0\0\0\0\0\0\0\1\1\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
				"\0\0\0\0\0\1\1\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\1\1"
				"\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\1\1\0\0\0\0\0\0\0"
				"\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\1\1\4\4\4\4\4\4\4\4\0\0\0\0\0\0"
				"\0\0\0\0\0\0\0\0\1\1\4\0\4\0\0\0\0\4\0\0\0\0\0\0\0\0\0\0\0\0\0"
				"\0\1\1\4\0\0\0\0\5\0\4\0\0\0\0\0\0\0\0\0\0\0\0\0\0\1\1\4\0\4\0"
				"\0\0\0\4\0\0\0\0\0\0\0\0\0\0\0\0\0\0\1\1\4\0\4\4\4\4\4\4\0\0\0"
				"\0\0\0\0\0\0\0\0\0\0\0\1\1\4\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
				"\0\0\0\0\1\1\4\4\4\4\4\4\4\4\0\0\0\0\0\0\0\0\0\0\0\0\0\0\1\1\1"
				"\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1",
				sizeof(char) * 24 * 24);
	return (map[x][y]);
}

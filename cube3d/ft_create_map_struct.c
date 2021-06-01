/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_map_struct.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 00:48:12 by cshells           #+#    #+#             */
/*   Updated: 2020/12/11 00:48:13 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub.h"

t_map	*ft_create_map_struct(void)
{
	t_map	*map;

	if (!(map = (t_map*)malloc(sizeof(t_map))))
		return (NULL);
	map->width = 0;
	map->height = 0;
	return (map);
}

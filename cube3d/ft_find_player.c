/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_player.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 00:26:36 by cshells           #+#    #+#             */
/*   Updated: 2020/12/11 00:26:38 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub.h"

int     ft_find_player(t_plr *plr, t_map *map)
{
    int     i;
    int     j;
    int     len;
    int     count;

    i = 0;
    count = 0;
    while (i < map->height)
    {
        j = 0;
        len = ft_strlen(map->plan[i]);
        while (j < len)
        {
            if (map->plan[i][j] == 'N' || map->plan[i][j] == 'S' || map->plan[i][j] == 'E' || map->plan[i][j] == 'W')
            {
                count++;
                //printf("%d %d\n", j, i);
                ft_write_player_data(plr, j, i, 3 * M_PI_2); //3 * M_PI_2
            }
            j++;
        }
        i++;
    }
    return (count);
}

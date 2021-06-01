/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_items.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 00:40:05 by cshells           #+#    #+#             */
/*   Updated: 2020/12/11 00:40:06 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub.h"

int     ft_find_items(t_item **item, t_map *map)
{
    int i;
    int j;
    int count;

    i = 0;
    count = 0;
    while (i < map->height)
    {
        j = 0;
        while (j < ft_strlen(map->plan[i]))
        {
            if (map->plan[i][j] == '2')
            {
                //printf("%d\n", 1);
                if (!(item[count] = ft_create_new_item(j, i)))
                    return (-1);
                count++;
            }
            j++;
        }
        i++;
    }
    return (0);
}

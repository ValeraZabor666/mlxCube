/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 23:55:54 by cshells           #+#    #+#             */
/*   Updated: 2020/12/10 23:55:56 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub.h"

void    ft_draw_map(t_all *all)
{
    int     i;
    int     j;
    int     x;
    int     y;
    int     len;

    i = 0;
    y = 0;
    while (i < all->map->height)
    {
        j = 0;
        x = 0;
        len = ft_strlen(all->map->plan[i]);
        while (j < len)
        {
            if (all->map->plan[i][j] == '1')
                ft_mlx_pixel_put(all->image, x, y, 0x00FFFFFF, 20);
            //if (data->map->plan[i][j] == 'N')
                //ft_mlx_pixel_put(image, x, y, 0x0000FF00, 10);
            j++;
            x += 20;
        }
        i++;
        y += 20;
    }
    //ft_mlx_pixel_put(data->image, data->player->start_x * 10 + data->player->x, data->player->start_y * 10 + data->player->y, 0x0000FFA6, 10);
    //ft_mlx_pixel_put(image, data->player->x, data->player->y, 0x0000FFA6, 10);
}

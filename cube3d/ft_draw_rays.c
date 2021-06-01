/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_rays.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 19:40:05 by cshells           #+#    #+#             */
/*   Updated: 2020/12/14 19:40:12 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub.h"

/*void        ft_draw_line(t_all *all, t_plr *ray, int len)
{
    float visota;
    float z;

    visota = 0;
    z = 1000 / len;
    while (visota < z)
    {
        ft_mlx_pixel_put(all->image, ray->x, ray->y + visota, 0x00ff0000, 1);
        visota++;
    }
}*/

void        ft_draw_rays(t_all *all)
{
    t_plr	*ray;
    //int i = 0;
    float   ray_start = all->plr->dir - M_PI / 4;
    float   ray_end = all->plr->dir + M_PI / 4;

    ray = (t_plr*)malloc(sizeof(t_plr));
    //ray->x = all->plr->x + all->plr->start_x * SCALE + 5;
    //ray->y = all->plr->y + all->plr->start_y * SCALE + 5;
    ray->dir = all->plr->dir;
    while (ray_start <= ray_end)
    {
        //i = 0;
        ray->x = all->plr->x + all->plr->start_x * 20;// + 5;
        ray->y = all->plr->y + all->plr->start_y * 20;// + 5;
        while (all->map->plan[(int)(ray->y / 20)][(int)(ray->x / 20)] != '1')
        {
            //i++;
            ray->x += cos(ray_start);
            ray->y += sin(ray_start);
            //mlx_pixel_put(all->mlx, all->win, ray.x, ray.y, 0xF70000);
            ft_mlx_pixel_put(all->image, ray->x, ray->y, 0x00ff0000, 1);
        }
        //printf("%d\n", i);
        //ft_draw_line(all, ray, i);
        ray_start += M_PI_2 / 2;
    }

}
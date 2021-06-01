/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_plr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 19:39:46 by cshells           #+#    #+#             */
/*   Updated: 2020/12/14 19:39:48 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub.h"

void    ft_draw_plr(t_all *all)
{
    ft_mlx_pixel_put(all->image, all->plr->start_x * 20 + all->plr->x, all->plr->start_y * 20 + all->plr->y, 0x0000FFA6, 20);
    //ft_mlx_pixel_put(all->image, all->plr->x + all->plr->start_x * 10, all->plr->y + all->plr->start_y * 10, 0x00990099, 10);
}

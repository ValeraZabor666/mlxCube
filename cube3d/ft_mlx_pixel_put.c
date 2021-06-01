/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlx_pixel_put.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 23:54:12 by cshells           #+#    #+#             */
/*   Updated: 2020/12/10 23:54:16 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub.h"

void            ft_mlx_pixel_put(t_image *image, int x, int y, int color, int scale)
{
    int     x0 = x;
    int     y0 = y;
    char    *dst;

    while (y - y0 <= scale)
    {
        x = x0;
        while (x - x0 <= scale)
        {
            dst = image->addr + (y * image->line_length + x * (image->bits_per_pixel / 8));
            *(unsigned int*)dst = color;
            x++;
        }
        y++;
    }
}
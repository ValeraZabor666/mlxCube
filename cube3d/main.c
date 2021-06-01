/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 16:30:43 by cshells           #+#    #+#             */
/*   Updated: 2020/12/09 17:34:48 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "cub.h"

int     key_press(int key, t_all *all)
{
    //mlx_clear_window(all->mlx, all->win);

    //float px = all->plr->x
    //float py = all->plr->y

    if (key == 13)
    {
        all->plr->x += cos(all->plr->dir);
        all->plr->y += sin(all->plr->dir);
    }//W
        //all->plr->y -= 1;
    if (key == 1)
        all->plr->y += 1; //S
    if (key == 0) //A
        all->plr->dir -= M_PI /60;//0.1;
    if (key == 2) //D
        all->plr->dir += M_PI /60;//0.1;
    if (key == 53)
        exit (0);

    if (all->plr->dir <= -2 * M_PI)
        all->plr->dir = 0;
    if (all->plr->dir >= 2 * M_PI)
        all->plr->dir = 0;
    //printf("%f\n", all->plr->dir);
    mlx_destroy_image(all->mlx, all->image->img);
    all->image->img = mlx_new_image(all->mlx, 800, 600);
    all->image->addr = mlx_get_data_addr(all->image->img, &(all->image->bits_per_pixel), &(all->image->line_length), &(all->image->endian));

    ft_draw_screen(all);
    mlx_put_image_to_window(all->mlx, all->win, all->image->img, 0 , 0);
    //ft_draw_map(all->image, all);

    /*t_player	ray;

    ray.x = all->player->x + all->player->start_x * SCALE + 5;
    ray.y = all->player->y + all->player->start_y * SCALE + 5;
    ray.dir = all->player->dir;
    while (all->map->plan[(int)(ray.y / SCALE)][(int)(ray.x / SCALE)] != '1')
    {
        ray.x += cos(ray.dir);
        ray.y += sin(ray.dir);
        mlx_pixel_put(all->mlx, all->win, ray.x, ray.y, 0xF70000);
        //ft_mlx_pixel_put(image, ray.x, ray.y, 0x00990099, 10);
    }*/
    /*int x, y;

    x = 0;
    y = 0;
    if (key == 13)
    {
        ft_mlx_pixel_put(data->image, x, y, 0x0000FF00, 10);
        x += 10;
        y += 10;
    }*/
    /*if (key == 13)
    {
        //printf("Hello World!\n");
        ft_mlx_pixel_put(data->image, 100, 100, 0x0000FF00, 10);
    }*/
    //printf("Hello World!\n");
    return (0);
}


int main(int argc, char **argv)
{
    //t_vars      vars;
    //void        *mlx;
    //void        *win;
    //void      *img;
    //t_image      image;
    t_all       *all;
    int     x = 0;
    int     y = 0;
    int     i = 0;
    int     j = 0;
    //int     offset = (y * line_length + x * (bits_per_pixel / 8));

    //data = (t_data*)malloc(sizeof(t_data));

    if (!(all = ft_create_data_struct(argv[1])))
    {
        ft_putendl_fd("EXIT", 1);
        return (0);
    }

    all->image = (t_image*)malloc(sizeof(t_image));

    all->mlx = mlx_init();
    all->win = mlx_new_window(all->mlx, 800, 600, "cube");

    all->image->img = mlx_new_image(all->mlx, 800, 600);
    all->image->addr = mlx_get_data_addr(all->image->img, &(all->image->bits_per_pixel), &(all->image->line_length), &(all->image->endian));

    ft_draw_screen(all);
    //ft_draw_plr(all);
    //ft_draw_rays(all);
    //ft_mlx_pixel_put(all->image, all->plr->x + all->plr->start_x * 10, all->plr->y + all->plr->start_y * 10, 0x00990099, 10);
    mlx_put_image_to_window(all->mlx, all->win, all->image->img, 0 , 0);
    mlx_hook(all->win, 2, (1L << 0), key_press, all);
    //mlx_key_hook(all->win, key_press, all);
    mlx_loop(all->mlx);

    /*data->mlx = mlx_init();
    data->win = mlx_new_window(data->mlx, 640, 480, "okno");
    image.img = mlx_new_image(data->mlx, 640, 480);
    image.addr = mlx_get_data_addr(image.img, &image.bits_per_pixel, &image.line_length, &image.endian);*/

    /*data->mlx = mlx_init();
    data->win = mlx_new_window(data->mlx, 640, 480, "Hello world!");
    data->image->img = mlx_new_image(data->mlx, 640, 480);
    data->image->addr = mlx_get_data_addr(data->image->img, &data->image->bits_per_pixel, &data->image->line_length, &data->image->endian);
    mlx_key_hook(data->win, key_press, data);
    mlx_loop(data->mlx);*/

    /*ft_draw_map(&image, data);
    mlx_key_hook(data.win, key_press, &data);*/

    /*while (i < data->map->height)
    {
        j = 0;
        x = 0;
        while (j < data->map->width)
        {
            if (data->map->plan[i][j] == '1')
                ft_mlx_pixel_put(&image, x, y, 0x0000FFFF, 10);
            if (data->map->plan[i][j] == 'N')
                ft_mlx_pixel_put(&image, x, y, 0x0000FF00, 10);
            j++;
            x += 10;
        }
        i++;
        y += 10;
    }*/

    /*printf("map height: %d\n", all->map->height);
    //printf("map width: %d\n", data->map->width);
    printf("player: position: x: %f y: %f dir: %f\n", all->plr->start_x, all->plr->start_y, all->plr->dir);
    printf("item: position: x: %f y: %f\n", all->item[1]->x, all->item[1]->y);*/

    /*int a = 26;
    double b = 11.743;

    int c = (int)b;
    int d = b;

    printf("%d %d\n", c, d);*/

    /*while (i < data->map->height)
    {
        j = 0;
        while (j < data->map->width)
        {
            printf("%c", data->map->plan[i][j]);
            j++;
        }
        i++;
    }*/

    /*while (all->map->plan[i])
    {
        printf("%s\n", all->map->plan[i++]);
    }
    printf("%d\n", ft_find_player(all->plr, all->map));*/


    //mlx_put_image_to_window(mlx, win, image.img, 0 , 0);
    //mlx_loop(mlx);

    return (0);
}

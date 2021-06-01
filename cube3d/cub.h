/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 17:16:41 by cshells           #+#    #+#             */
/*   Updated: 2020/12/11 15:41:33 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB_H
# define CUB_H

# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>
# include <math.h>
# include "gnl/get_next_line.h"
# include "libft/libft.h"
# include "minilibx_mms/mlx.h"
# define PI 3.1
# define SCALE 10

typedef struct      s_map
{
    //int     width;
    int     height;
    char    **plan;
}                   t_map;

typedef struct      s_plr
{
    float     x;
    float     y;
    float    start_x;
    float     start_y;
    float     dir;
    //char    direct;
}                   t_plr;

typedef struct      s_item
{
    float     x;
    float     y;
}                   t_item;

typedef struct      s_image {

    void        *img;
    char        *addr;
    int         bits_per_pixel;
    int         line_length;
    int         endian;
}                   t_image;

typedef struct      s_vars
{
    void        *mlx;
    void        *win;
}                   t_vars;

typedef struct      s_all
{
    t_map       *map;
    t_item      **item;
    t_plr       *plr;
    t_image     *image;
    void        *mlx;
    void        *win;
}                   t_all;

int         ft_parse_map(t_all *all);
int         ft_find_items(t_item **item, t_map *map);
int         ft_find_player(t_plr *plr, t_map *map);
int         ft_read_map(char *map_file, t_map *map);
char	    **ft_make_map(t_list **head, int size);
void        ft_draw_map(t_all *all);
void        ft_draw_plr(t_all *all);
void        ft_draw_rays(t_all *all);
void        ft_draw_screen(t_all *all);
void        ft_mlx_pixel_put(t_image *image, int x, int y, int color, int scale);
void        ft_write_player_data(t_plr *plr, int x, int y, float dir);
t_all      *ft_create_data_struct(char *map_file);
t_map       *ft_create_map_struct(void);
t_item	    *ft_create_new_item(float x, float y);
t_item      **ft_create_item_struct(void);
t_plr       *ft_create_player_struct(void);


#endif

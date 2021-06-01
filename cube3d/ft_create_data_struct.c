/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_data_struct.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 15:47:19 by cshells           #+#    #+#             */
/*   Updated: 2020/12/11 15:47:25 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub.h"

t_data  *ft_create_data_struct(char *map_file)
{
    t_data  *data;

    if (!(data = (t_data*)malloc(sizeof(t_data))))
        return (NULL);
    if (!(data->map = ft_create_map_struct()))
    {
        ft_putendl_fd("MAP STRUCT CREATION ERROR", 1);
        return (NULL);
    }
    if (!(data->player = ft_create_player_struct()))
    {
        ft_putendl_fd("PLAYER STRUCT CREATION ERROR", 1);
        return (NULL);
    }
    if (!(data->item = ft_create_item_struct()))
    {
        ft_putendl_fd("ITEM STRUCT CREATION ERROR", 1);
        return (NULL);
    }
    if (ft_read_map(map_file, data->map) < 0)
    {
        ft_putendl_fd("MAP READING ERROR", 1);
        return (0);
    }
    if (ft_parse_map(data) < 0)
    {
        ft_putendl_fd("INVALID MAP", 1);
        return (NULL);
    }
    return (data);
}
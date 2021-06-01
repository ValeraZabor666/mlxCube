/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_player_data.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 16:14:55 by cshells           #+#    #+#             */
/*   Updated: 2020/12/11 16:14:56 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub.h"

void    ft_write_player_data(t_plr *plr, int x, int y, float dir)
{
    plr->start_x = x;
    plr->start_y = y;
    plr->dir = dir;
    //player->x = x;
    //player->y = y;
}

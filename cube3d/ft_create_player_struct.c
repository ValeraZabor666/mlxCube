/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_player_struct.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 23:59:44 by cshells           #+#    #+#             */
/*   Updated: 2020/12/10 23:59:57 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub.h"

t_plr	*ft_create_player_struct(void)
{
    t_plr	*plr;

    if (!(plr = (t_plr*)malloc(sizeof(t_plr))))
        return (NULL);
    plr->x = 0;
    plr->y = 0;
    plr->dir = 0;
    return (plr);
}
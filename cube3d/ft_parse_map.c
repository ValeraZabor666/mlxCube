/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 00:05:00 by cshells           #+#    #+#             */
/*   Updated: 2020/12/10 00:05:50 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub.h"

int     ft_parse_map(t_all *all)
{
    if (ft_find_player(all->plr, all->map) != 1)
    {
        ft_putendl_fd("NO OR MORE THAN 1 PLAYER ON MAP", 1);
        return (-1);
    }
    if (ft_find_items(all->item, all->map) < 0)
    {
        ft_putendl_fd("CAN'T ALLOCATE MEMORY FOR ITEM", 1);
        return (-1);
    }
    return (0);
}

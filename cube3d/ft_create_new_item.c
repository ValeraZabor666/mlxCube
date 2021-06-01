/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_new_item.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 00:41:57 by cshells           #+#    #+#             */
/*   Updated: 2020/12/11 00:41:58 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub.h"

t_item	    *ft_create_new_item(float x, float y)
{
    t_item	*item;

    if (!(item = (t_item*)malloc(sizeof(t_item))))
        return (NULL);
    item->x = x;
    item->y = y;
    return (item);
}

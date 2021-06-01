/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_item_struct.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 00:01:40 by cshells           #+#    #+#             */
/*   Updated: 2020/12/11 00:01:41 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub.h"

t_item      **ft_create_item_struct(void)
{
    t_item	**item;

    if (!(item = (t_item**)malloc(sizeof(t_item*) * 32)))
        return (NULL);
    return (item);
}

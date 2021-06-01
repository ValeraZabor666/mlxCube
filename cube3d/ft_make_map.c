/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 22:24:46 by cshells           #+#    #+#             */
/*   Updated: 2020/12/08 22:49:52 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub.h"

char	**ft_make_map(t_list **head, int size)
{
    int		i;
    char	**plan;
    t_list	*tmp;

    i = 0;
    tmp = *head;
    if (!(plan = (char**)ft_calloc(size + 1, sizeof(char*))))
        return (NULL);
    while (tmp)
    {
        plan[i] = tmp->content;
        tmp = tmp->next;
        i++;
    }
    return (plan);
}

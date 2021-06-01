/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 17:14:25 by cshells           #+#    #+#             */
/*   Updated: 2020/12/08 22:56:30 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub.h"

int      ft_read_map(char *map_file, t_map *map)
{
    int		fd;
    int     gnl;
    char	*line;
    t_list	*head;

    line = NULL;
    head = NULL;
    fd = open(map_file, O_RDONLY);
    while ((gnl = get_next_line(fd, &line)))
    {
        if (gnl < 0)
            return (-1);
        map->height++;
        ft_lstadd_back(&head, ft_lstnew(line));
    }
    if (!(map->plan = ft_make_map(&head, ft_lstsize(head))))
        return (-1);
    return (0);
}




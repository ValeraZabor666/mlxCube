/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshells <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 21:54:42 by cshells           #+#    #+#             */
/*   Updated: 2020/12/07 22:14:18 by cshells          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <fcntl.h>

void	ft_make_map(t_list **head, int size)
{ 
	char	**map;
	int		i;

	i = -1;
	map = (char*)ft_calloc(size + 1, sizeof(char*));
}

int		main(int argc, char **argv)
{
	int		fd;
	char	*line;
	t_list	*head;

	ft = open(argv[1], O_RDONLY);
	*line = 0;
	head = 0;
}

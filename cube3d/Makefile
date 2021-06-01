# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cshells <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/07 22:06:44 by cshells           #+#    #+#              #
#    Updated: 2020/12/15 16:37:46 by cshells          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = kub

SRC = main.c \
	  ft_create_data_struct.c \
	  ft_create_item_struct.c \
	  ft_create_player_struct.c \
	  ft_create_new_item.c \
	  ft_create_map_struct.c \
	  ft_draw_map.c \
	  ft_draw_plr.c \
	  ft_draw_rays.c \
	  ft_draw_screen.c \
	  ft_find_items.c \
	  ft_find_player.c \
	  ft_make_map.c \
	  ft_mlx_pixel_put.c \
	  ft_parse_map.c \
	  ft_read_map.c \
	  ft_write_player_data.c \

OBJ = $(SRC:.c=.o)

TAGS = -Wall -Wextra -Werror

CC = gcc -g

MLX = libmlx.dylib -framework OpenGL -framework AppKit

RM = rm -rf

LIBS = libft/libft.a

GNL = gnl/get_next_line.c

all:	$(NAME)

$(NAME): $(OBJ) cub.h
	$(CC) $(TAGS) $(MLX) $(LIBS) $(OBJ) $(GNL) -o $(NAME)

clean: 
	#@$(MAKE) -C mlx clean
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re

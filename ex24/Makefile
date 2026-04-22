# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gjuan-pa <gjuan-pa@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/21 11:00:24 by gjuan-pa          #+#    #+#              #
#    Updated: 2026/04/21 12:40:42 by gjuan-pa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS_DIR	= srcs/
INT_DIR		= includes/
FILES =		$(SRCS_DIR)/ft_putchar.c \
		$(SRCS_DIR)/ft_putstr.c \
		$(SRCS_DIR)/ft_strcmp.c \
		$(SRCS_DIR)/ft_strlen.c \
		$(SRCS_DIR)/ft_swap.c

OBJS = $(FILES:.c=.o)
 
all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -I $(INT_DIR) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

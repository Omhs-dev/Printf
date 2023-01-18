# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/15 23:35:39 by ohamadou          #+#    #+#              #
#    Updated: 2023/01/17 04:13:43 by ohamadou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = printf.a

SRCS = ft_printf.c

OBJ = $(SRCS:.c=.o)

#LIBFT = ft_strlen.c

#LIBFTSRCS = $(addprefix Libft/,$(LIBFT))

#LIBFTOBJS = $(LIBFTSRCS:.c=.o)

SRCDIR = ft_putchar.c ft_putstr.c ft_putnbr.c

SRCDIR_SRC = $(addprefix src/,$(SRCDIR))

SRCDIR_OBJS = $(SRCDIR_SRC:.c=.o)

CFLAGS = -Wall -Wextra -Werror

CC = cc
#AR = ar rcs

all: $(NAME)

$(NAME): $(OBJ) $(SRCDIR_OBJS)
	ar rcs $(NAME) $(OBJ) $(SRCDIR_OBJS)
# ranlib $(NAME)

# $(OBJ): $(SRCS)
# 	$(CC) $(CFLAGS) -c $(SRCS)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(SRCDIR_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all fclean re bonus

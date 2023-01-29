# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/15 23:35:39 by ohamadou          #+#    #+#              #
#    Updated: 2023/01/28 20:59:16 by ohamadou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printchar.c \
		ft_printnbr.c \
		ft_printpercent.c \
		ft_printptr.c \
		ft_printstr.c \
		ft_printunsigned.c \
		ft_printf.c \
		ft_printhex.c \
		main.c
		
LIBFTFILES = ft_itoa.c \
		ft_putchar_fd.c \
		
LIBFTSRCS = $(addprefix libft/,$(LIBFTFILES))

OBJ = $(SRCS:.c=.o)
LIBFTOBJS = $(LIBFTSRCS:.c=.o)


CFLAGS = -Wall -Werror -Wextra

CC = cc

all : $(NAME)

$(NAME) : $(OBJ) $(LIBFTOBJS) ft_printf.h
		$(CC) $(OBJ) $(LIBFTOBJS)
		ar -rcs $(NAME) $(OBJ) $(LIBFTOBJS)

# %.o : %.c ftprintf.h
# 	${cc} ${CFLAGS} -c $< -o $@

clean:
	rm -f $(OBJ) $(LIBFTOBJS)
	
fclean:
	rm -f $(NAME)

re: fclean all

.PHONY : all fclean re
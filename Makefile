# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edcastro <edcastro@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/04 18:34:09 by edcastro          #+#    #+#              #
#    Updated: 2023/07/12 17:55:03 by edcastro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

OBJ  = $(SRC:%.c=%.o)

SRC  = 	ft_printf.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_putnbr.c \
		ft_puthex.c \
		ft_putuint.c \
		ft_putptr.c \

%.o: %.c
	cc -Wall -Wextra -Werror -c $< -o $@

all: $(NAME)
	
$(NAME): $(OBJ)
	ar -rcs $(NAME) $^

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME) 

bonus: all

re: fclean all bonus
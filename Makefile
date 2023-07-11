# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edcastro <edcastro@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/04 18:34:09 by edcastro          #+#    #+#              #
#    Updated: 2023/07/11 10:29:56 by edcastro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GREEN = \033[0;32m
NC = \033[0m

CC = cc
FLAGS = -Wall -Wextra -Werror
RM = rm -rf
SRCS_DIR = ./srcs
FILES = $(SRCS_DIR)/ft_printf.c \
		$(SRCS_DIR)/ft_putchar.c \
		$(SRCS_DIR)/ft_putstr.c \
		$(SRCS_DIR)/ft_putnbr.c \
OBJS = $(FILES:.c=.o)
INC = -I./include
NAME = libftprintf.a

all: $(NAME)
		@echo "$(GREEN)Compilation Successfully!$(NC)"

%.o: %.c
		$(CC) $(FLAGS) $(INC) -c $< -o $@

$(NAME): $(OBJS)
		@ar -rcs $(NAME) $(OBJS)

bonus: all

clean:
		@$(RM) $(OBJS)

fclean: clean
		@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
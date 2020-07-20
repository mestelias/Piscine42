# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emestour <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/20 11:26:05 by emestour          #+#    #+#              #
#    Updated: 2020/07/20 13:08:01 by emestour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ./srcs/ft_putchar.c ./srcs/ft_swap.c ./srcs/ft_putstr.c ./srcs/ft_strlen.c ./srcs/ft_strcmp.c

OBJ = ${SRCS:.c=.o}

FLAGS = -Wall -Wextra -Werror

INCLUDES= ./includes

.c.o:
	gcc $(FLAGS) -I $(INCLUDES) -c $< -o $(<:.c=.o)
all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
clean: 
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re

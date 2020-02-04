# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhorpe <mhorpe@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/04 12:17:41 by mhorpe            #+#    #+#              #
#    Updated: 2020/02/04 12:17:44 by mhorpe           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit


FLAGS = -Wall -Wextra -Werror -c

SRC =	f_f_m_a.c \
		f_f_m_a_p2.c \
		f_f_m_a_p3.c \
		f_f_m_a_p4.c \
		field.c \
		figure.c \
		fill_print_final_result.c \
		logical.c \
		main.c \
		main_a_sup.c \
		main_algorithm.c \
		move_figure.c \
		useful_f_p1.c \
		validate.c \
		throw_error.c \
		ft_sqrt.c \

OBJ = 	f_f_m_a.o \
		f_f_m_a_p2.o \
		f_f_m_a_p3.o \
		f_f_m_a_p4.o \
		field.o \
		figure.o \
		fill_print_final_result.o \
		logical.o \
		main.o \
		main_a_sup.o \
		main_algorithm.o \
		move_figure.o \
		useful_f_p1.o \
		validate.o \
		throw_error.o \
		ft_sqrt.o \

all: $(NAME)

$(NAME):
	make -C ./libft
	gcc $(FLAGS) $(SRC) -I ./
	gcc -o $(NAME) $(OBJ) -L libft/ -lft

clean:
	rm -rf ./libft/*.o
	rm -rf $(OBJ)

fclean: clean
	rm -f $(NAME) ./libft/libft.a

re: fclean all

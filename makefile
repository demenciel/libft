# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acouture <acouture@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/06 14:08:40 by acouture          #+#    #+#              #
#    Updated: 2023/01/12 13:21:58 by acouture         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = *.c

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): libft
	ar -rc $(NAME) *.o
	make clean

libft: $(SRC)
	gcc $(FLAGS) -c $(SRC)

# all: $(NAME)

# $(NAME): libft
# 	gcc $(FLAGS) -o $(NAME) *.o
# 	make clean

# libft: $(SRC)
# 	gcc -c $(SRC)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
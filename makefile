# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acouture <acouture@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/06 14:08:40 by acouture          #+#    #+#              #
#    Updated: 2023/01/13 09:25:13 by acouture         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = *.c

OBJS = $(SOURCES: .c=.o)

CC = gcc

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): libft
	ar -rc $(NAME) *.o

libft: $(SRC)
	$(CC) $(FLAGS) -c $(SRC)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
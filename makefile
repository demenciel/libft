# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acouture <acouture@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/06 14:08:40 by acouture          #+#    #+#              #
#    Updated: 2023/01/13 11:18:59 by acouture         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC =	ft_atoi.c \ ft_bzero.c \ ft_calloc.c \ ft_isalnum.c \ ft_isalpha.c \ ft_isascii.c /
		ft_isdigit.c \ ft_isprint.c \ ft_itoa.c \ ft_memchr.c \ ft_memcmp.c \ ft_memcpy.c /
		ft_memmove.c \ ft_memset.c \ ft_putchar_fd.c \ ft_putendl.c \ ft_putnbr_fd.c \ 
		ft_putstring_fd.c \ ft_split.c \ ft_strchr.c \ ft_strdup.c \ ft_striteri.c \ 
		ft_strjoin.c \ ft_strlcat.c \ ft_strlcpy.c \ ft_strlen.c \ ft_strmapi.c \ 
		ft_strncmp.c \ ft_strnstr.c \ ft_strrchr.c \ ft_strtrim.c \ ft_substr.c \ 
		ft_tolower.c \ ft_toupper.c  

OBJS = $(SRC: .c=.o)

CC = gcc

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): libft
	ar -rc $(NAME) $(OBJS)

libft: $(SRC)
	$(CC) $(FLAGS) -c $(SRC)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
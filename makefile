# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: utilisateur <utilisateur@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/06 14:08:40 by acouture          #+#    #+#              #
#    Updated: 2023/01/28 15:30:06 by utilisateur      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC =	ft_atoi.c \
	 	ft_bzero.c \
		ft_calloc.c \
	 	ft_isalnum.c \
	 	ft_isalpha.c \
	 	ft_isascii.c \
	 	ft_isdigit.c \
	 	ft_isprint.c \
	 	ft_itoa.c \
	 	ft_memchr.c \
	 	ft_memcmp.c \
	 	ft_memcpy.c \
	 	ft_memmove.c \
	 	ft_memset.c \
	 	ft_putchar_fd.c \
	 	ft_putendl_fd.c \
	 	ft_putnbr_fd.c \
	 	ft_putstr_fd.c \
	 	ft_split.c \
	 	ft_strchr.c \
	 	ft_strdup.c \
	 	ft_striteri.c \
	 	ft_strjoin.c \
	 	ft_strlcat.c \
	 	ft_strlcpy.c \
	 	ft_strlen.c \
	 	ft_strmapi.c \
	 	ft_strncmp.c \
	 	ft_strnstr.c \
	 	ft_strrchr.c \
	 	ft_strtrim.c \
	 	ft_substr.c \
	 	ft_tolower.c \
	 	ft_toupper.c \
		libft/ft_printf/ft_itoa_to_hexa.c \
		libft/ft_printf/ft_printf.c \
		libft/ft_printf/ft_putchar_fd.c \
		libft/ft_printf/ft_putnbr_fd.c \
		libft/ft_printf/ft_putnbr_unsigned_fd.c \
		libft/ft_printf/ft_putpointer_fd.c \
		libft/ft_printf/ft_putstr_fd.c \
		libft/ft_printf/ft_strlen.c \
		libft/get_next_line/get_next_line_utils.c
		libft/get_next_line/get_next_line.c


SRC_BONUS = ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c \

BONUS_OBJS = $(SRC_BONUS:.c=.o)

OBJS = $(SRC:%.c=%.o)

CC = gcc

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus:	$(OBJS) $(BONUS_OBJS)
		ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY: all clean fclean re bonus
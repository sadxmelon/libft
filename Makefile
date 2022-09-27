# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aalghfel <aalghfel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/27 12:27:17 by aalghfel          #+#    #+#              #
#    Updated: 2022/09/27 15:16:48 by aalghfel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SOURCES = ft_atoi.c\
ft_bzero.c\
ft_calloc.c\
ft_isalnum.c\
ft_isalpha.c\
ft_isascii.c\
ft_isdigit.c\
ft_isprint.c\
ft_memchr.c\
ft_memcmp.c\
ft_memcpy.c\
ft_memmove.c\
ft_memset.c\
ft_split.c\
ft_strchr.c\
ft_strdup.c\
ft_strjoin.c\
ft_strlcat.c\
ft_strlcpy.c\
ft_strlen.c\
ft_strncmp.c\
ft_strnstr.c\
ft_strrchr.c\
ft_substr.c\
ft_tolower.c\
ft_toupper.c

OBJECTS = $(SOURCES:.c=.o)
CC = gcc -Wall -Wextra -Werror
LIBC = ar rcs

$(NAME): all

.c.o:
	$(CC) -c $< -o $(<:.c=.o)

all: $(SOURCES) $(OBJECTS)
	$(LIBC) $(NAME) $(OBJECTS)

re: fclean all

clean:
	rm $(OBJECTS)

fclean: clean
	rm $(NAME)

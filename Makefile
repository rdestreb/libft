#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdestreb <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/03 12:22:32 by rdestreb          #+#    #+#              #
#    Updated: 2014/11/26 17:21:59 by rdestreb         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
HEADERFILES = libft.h
HEADERDIR = ./
HEADER = $(addprefix $(HEADERDIR), $(HEADERFILES))
SRCSDIR = ./
SRCS = $(addprefix $(SRCSDIR), $(SRCSFILES))
SRCSFILES =		ft_memset.c \
				ft_bzero.c \
				ft_memcpy.c \
				ft_memccpy.c \
				ft_memmove.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_strlen.c \
				ft_strdup.c \
				ft_strcpy.c \
				ft_strncpy.c \
				ft_strcat.c \
				ft_strncat.c \
				ft_strlcat.c \
				ft_strchr.c \
				ft_strrchr.c \
				ft_strstr.c \
				ft_strnstr.c \
				ft_strcmp.c \
				ft_strncmp.c \
				ft_atoi.c \
				ft_isalpha.c \
				ft_isdigit.c \
				ft_isalnum.c \
				ft_isascii.c \
				ft_isprint.c \
				ft_isspace.c \
				ft_isblank.c \
				ft_toupper.c \
				ft_tolower.c \
				ft_memalloc.c \
				ft_memdel.c \
				ft_strnew.c \
				ft_strdel.c \
				ft_strclr.c \
				ft_striter.c \
				ft_striteri.c \
				ft_strmap.c \
				ft_strmapi.c \
				ft_strequ.c \
				ft_strnequ.c \
				ft_strsub.c \
				ft_strjoin.c \
				ft_strtrim.c \
				ft_strsplit.c \
				ft_itoa.c \
				ft_putchar.c \
				ft_putstr.c \
				ft_putendl.c \
				ft_putnbr.c \
				ft_putchar_fd.c \
				ft_putstr_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				get_next_line.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)
	ranlib $(NAME)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

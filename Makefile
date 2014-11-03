#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdestreb <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/03 12:22:32 by rdestreb          #+#    #+#              #
#    Updated: 2014/11/03 12:22:56 by rdestreb         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
HEADERFILES = libft.h
HEADERDIR = ./hdr/
HEADER = $(addprefix $(HEADERDIR), $(HEADERFILES))
SRCSDIR = ./src/
SRCS = $(addprefix $(SRCSDIR), $(SRCSFILES))
SRCSFILES =		ft_putchar.c \

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

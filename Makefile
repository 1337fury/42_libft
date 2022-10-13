# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abdeel-o < abdeel-o@student.1337.ma>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/29 12:34:18 by abdeel-o          #+#    #+#              #
#    Updated: 2022/10/08 18:05:23 by abdeel-o         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

all : $(NAME)

CC := gcc

CFLAGS := -Wall -Wextra -Werror

SRC := $(wildcard ft*.c)

OBJECTS := $(SRC:.c=.o);

$(NAME) : $(OBJECTS)
	ar -rc $(NAME) $(OBJECTS)

%.o:%.c
	$(CC) $(CFLAGS) -c $<

clean :
	rm -f $(OBJECTS)

fclean : clean
	rm -f $(NAME)

re : fclean all




# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abdeel-o < abdeel-o@student.1337.ma>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/29 12:34:18 by abdeel-o          #+#    #+#              #
#    Updated: 2022/10/13 22:21:21 by abdeel-o         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

all : $(NAME)

CC = gcc

CFLAGS := -Wall -Wextra -Werror

SRC =  \
 ./ft_memset.c \
 ./ft_bzero.c \
 ./ft_memcpy.c \
 ./ft_memcpy.c \
 ./ft_memmove.c \
 ./ft_memchr.c \
 ./ft_memcmp.c \
 ./ft_calloc.c \
 ./ft_strlen.c \
 ./ft_strlcpy.c \
 ./ft_strlcat.c \
 ./ft_strchr.c \
 ./ft_strrchr.c \
 ./ft_strncmp.c \
 ./ft_strnstr.c \
 ./ft_strdup.c \
 ./ft_isdigit.c \
 ./ft_atoi.c \
 ./ft_isalpha.c \
 ./ft_isalnum.c \
 ./ft_isascii.c \
 ./ft_isprint.c \
 ./ft_toupper.c \
 ./ft_tolower.c \
 ./ft_substr.c \
 ./ft_strjoin.c \
 ./ft_strtrim.c \
 ./ft_split.c \
 ./ft_itoa.c \
 ./ft_strmapi.c \
 ./ft_putchar_fd.c \
 ./ft_putstr_fd.c \
 ./ft_putendl_fd.c \
 ./ft_putnbr_fd.c

OBJECTS = $(SRC:.c=.o)

 SRC_BONUS = \
 ./ft_lstnew.c \
 ./ft_lstadd_front.c \
 ./ft_lstsize.c \
 ./ft_lstlast.c \
 ./ft_lstadd_back.c \
 ./ft_lstdelone.c \
 ./ft_lstclear.c \
 ./ft_lstiter.c \
 ./ft_lstmap.c

OBJECTS_BONUS = $(SRC_BONUS:.c=.o)

$(NAME) : $(OBJECTS)
	ar -rcs $(NAME) $(OBJECTS)

bonus : $(OBJECTS_BONUS)
	ar -rcs $(NAME) $^

%.o:%.c
	$(CC) $(CFLAGS) -c $<

clean :
	rm -f $(OBJECTS) $(OBJECTS_BONUS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re
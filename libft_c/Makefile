# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gvolante <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/19 16:29:19 by gvolante          #+#    #+#              #
#    Updated: 2023/12/19 17:40:59 by gvolante         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			= cc
CFLAGS			= -Wall -Wextra -Werror
LIBC			= ar -rcs
NAME 			= libft.a
RM				= rm -rf

SRC				= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
	  ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c \
	  ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c \
	  ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c \
	  ft_strnstr.c ft_strrchr.c ft_substr.c ft_tolower.c ft_toupper.c

SRC_OBJ	= $(SRC:.c = .o)

%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

all: $(NAME)
	

$(NAME) : $(SRC_OBJ)
	$(LIBC) $(NAME) $(SRC_OBJ)

clean: $(RM) *.o

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re bonus

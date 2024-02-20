

CC 			= cc
CFLAGS 			= -Wall -Werror -Wextra
LIBC			= ar -rcs
NAME 			= libftprintf.a
RM				= rm -rf

SRCS = ft_printf.c f_simple.c f_digit.c 

OBJ	= $(SRCS:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@


all: $(NAME)

$(NAME) : $(OBJ)
	$(LIBC) $(NAME) $(OBJ)

clean: 
	rm -f *.o

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re 


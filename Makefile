###########################################################
## ARGUMENTS

NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -rf

###########################################################
## SOURCES

SRCS = ft_printf.c \
       print_c.c \
       print_nbr.c \
       print_p.c \
       print_s.c \
       print_xlow.c \
       print_xup.c \
       print_u.c

OBJS = $(SRCS:.c=.o)

###########################################################
## RULES

all: $(LIBFT) $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

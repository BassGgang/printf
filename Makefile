CC = cc
CFRAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
SRCS = 	ft_change_base.c\
		ft_count_output.c\
		ft_printf.c\
		ft_putstr_count.c\
		ft_tolower_all.c\
		ft_treat_char.c\
		ft_treat_hexa.c\
		ft_treat_int.c\
		ft_freat_pointer.c\
		ft_treat_something.c\
		ft_treat_string.c\
		ft_treat_unit.c\

OBJS = $(SRCS:.c=.o)

INCLUDES = -I includes

$(NAME) :    $(OBJS)
	ar rc $(NAME) $(OBJS)

%.o:%.c
	$(CC) -c  $(CFLAGS) $^ -o $@ $(INCLUDES)

all : $(NAME)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
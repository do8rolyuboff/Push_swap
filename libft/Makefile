NAME = libft.a
FLAGS = -Wall -Werror -Wextra
OBJ = *.o
OPTIONS = -c -I.
SRC = ft_atol.c\
		ft_strequ.c\
		ft_putendl.c\
		ft_strcat.c\
	 	ft_strchr.c\
		ft_strclr.c\
		ft_strcmp.c\
		ft_strdel.c\
		ft_strjoin.c\
		ft_strlen.c\
		ft_strnew.c\
		ft_strsplit.c\
		ft_strsub.c\
		get_next_line.c\
		isdigit.c\

$(NAME):
	@gcc $(FLAGS) $(OPTIONS) $(SRC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

all: $(NAME)

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
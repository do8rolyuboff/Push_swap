NAME = libft.a
FLAGS = -Wall -Werror -Wextra
OBJ = *.o
OPTIONS = -c -I.
SRC = ft_atol.c\
		ft_strdup.c\
		ft_strequ.c\
		ft_putendl.c\
		ft_strcat.c\
	 	ft_strchr.c\
		ft_strclr.c\
		ft_strcmp.c\
		ft_strcpy.c\
		ft_strdel.c\
		ft_strjoin.c\
		ft_strlen.c\
		ft_strnew.c\
		ft_strsplit.c\
		ft_strsub.c\
		ft_putchar_fd.c\
		ft_putendl_fd.c\
		ft_putendl_col_fd.c\
		ft_putstr_fd.c\
		get_next_line.c\
		ft_isdigit.c\

GREEN = \033[0;32m
RED = \033[0;31m
RESET = \033[0m

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
	@gcc $(FLAGS) $(OPTIONS) $(SRC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "$(NAME): $(GREEN)object files were created$(RESET)"
	@echo "$(NAME): $(GREEN)$(NAME) was created$(RESET)"

clean:
	@/bin/rm -f $(OBJ)
	@echo "$(NAME): $(RED)object files were deleted$(RESET)"

fclean: clean
	@/bin/rm -f $(NAME)
	@echo "$(NAME): $(RED)$(NAME) was deleted$(RESET)"

re:
	@$(MAKE) fclean
	@$(MAKE) all
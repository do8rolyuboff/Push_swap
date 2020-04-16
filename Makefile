LIB = libft
NAME_CH = checker
NAME_PS = push_swap
CC = gcc
FLAGS = -Wall -Werror -Wextra
SRC_DIR = ./srcs/
INC_DIR = ./includes/
OBJ_DIR = ./srcs/
OPTIONS = -I$(INC_DIR) -I./libft -lft -L./libft
HDR = ./includes/push_swap.h

OBJ_CH = $(OBJ_DIR)checker.o $(OBJ_DIR)init_stack.o $(OBJ_DIR)validators.o $(OBJ_DIR)operations.o
OBJ_CH += $(OBJ_DIR)is_sorted.o $(OBJ_DIR)px.o $(OBJ_DIR)stack_size.o
OBJ_CH += $(OBJ_DIR)rrx.o $(OBJ_DIR)rx.o $(OBJ_DIR)sx.o $(OBJ_DIR)free.o

OBJ_PS = $(OBJ_DIR)push_swap.o $(OBJ_DIR)init_stack.o $(OBJ_DIR)validators.o
OBJ_PS += $(OBJ_DIR)is_sorted.o $(OBJ_DIR)px.o $(OBJ_DIR)rx.o $(OBJ_DIR)sx.o
OBJ_PS += $(OBJ_DIR)rrx.o $(OBJ_DIR)free.o $(OBJ_DIR)rx_or_rrx.o
OBJ_PS += $(OBJ_DIR)sort.o $(OBJ_DIR)sort2.o $(OBJ_DIR)stack_size.o


all: $(LIB) $(NAME_CH) $(NAME_PS)

$(LIB): relib cleanlib
	@echo "[$(LIB)] compiled"

%.o: $(SRC_DIR)%.c $(HDR)
	@$(CC) $(FLAGS) $(OPTIONS) -c $< -o $@

$(NAME_CH): $(OBJ_CH)
	@$(CC) -o $(NAME_CH) $(FLAGS) $(OPTIONS) $(OBJ_CH) 
	@echo "[$(NAME_CH)] compiled"

$(NAME_PS): $(OBJ_PS)
	@$(CC) -o $(NAME_PS) $(FLAGS) $(OPTIONS) $(OBJ_PS)
	@echo "[$(NAME_PS)] compiled"

clean: cleanlib
	@/bin/rm -f $(SRC_DIR)*.o
	@echo "Object files removed"

fclean: clean fcleanlib
	@/bin/rm -f $(NAME_CH) $(NAME_PS)
	@echo "[$(NAME_CH)] & [$(NAME_PS)] removed"

re: fclean all

relib:
	@$(MAKE) -C ./libft re

cleanlib:
	@$(MAKE) -C ./libft clean

fcleanlib: cleanlib
	@$(MAKE) -C ./libft fclean

cmake_minimum_required(VERSION 3.15)
project(push_swap C)

set(CMAKE_C_STANDARD 11)

include_directories(includes)
include_directories(libft)

add_executable(push_swap
        includes/push_swap.h
        libft/ft_atol.c
        libft/ft_putendl.c
        libft/ft_strcat.c
        libft/ft_strchr.c
        libft/ft_strclr.c
        libft/ft_strcmp.c
        libft/ft_strcpy.c
        libft/ft_strdel.c
        libft/ft_strequ.c
        libft/ft_strjoin.c
        libft/ft_strlen.c
        libft/ft_strnew.c
        libft/ft_strsplit.c
        libft/ft_strsub.c
        libft/get_next_line.c
        libft/isdigit.c
        libft/libft.h
        srcs/checker.c
        srcs/free.c
        srcs/init_stack.c
        srcs/is_sorted.c
        srcs/operations.c
        srcs/push_swap.c
        srcs/px.c
        srcs/rrx.c
        srcs/rx.c
        srcs/sort.c
        srcs/stack_size.c
        srcs/sx.c
        srcs/validators.c)

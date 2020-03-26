cmake_minimum_required(VERSION 3.15)
project(push_swap C)

set(CMAKE_C_STANDARD 99)

add_executable(push_swap.h
        checker.c
        digit_arg.c
        free_arg.c
        ft_atol.c
        ft_putendl.c
        ft_strdel.c
        ft_strsplit.c
        isdigit.c
        init_stack.c)
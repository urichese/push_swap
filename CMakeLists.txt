cmake_minimum_required(VERSION 3.19)
project(push_swap C)

set(CMAKE_C_STANDARD 99)

add_executable(push_swap sources/main.c sources/bubble_sort.c sources/push_swap.h sources/functions.c sources/hoara_sort.c libft/ft_atoi.c libft/ft_calloc.c libft/ft_bzero.c libft/ft_isdigit.c libft/ft_isspace_bonus.c libft/ft_isdigit.c libft/ft_memset.c libft/ft_putstr_fd libft/ft_putnbr_fd libft/ft_putchar_fd)
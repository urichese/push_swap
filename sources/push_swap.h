#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include "../libft/libft.h"

void	sa(int *stack);
void	sb(int *stack);
void	ra(int *stack, int len);
void	rb(int *stack, int len);
void	rra(int *stack, int len);
void	rrb(int *stack, int len);
void	pa(int **a, int **b, int *len_a, int *len_b);
void	pb(int **a, int **b, int *len_a, int *len_b);
char	**bubble_sort(int **a, int **b, int *len_a, int *len_b);
void	print_a(int *a, int len_a);
void	print_b(int *b, int len_b);
int		*check(int argc, char **argv);
int		ft_isnumber(const char *str);
void	hoara_sort(int **a, int **b, int *len_a, int *len_b);
void	print_ins(char **ins);
//void	libft/ft_putstr_fd(char *s, int fd);

#endif

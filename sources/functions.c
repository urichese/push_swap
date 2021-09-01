#include <stdio.h>
#include <stdlib.h>
#include "push_swap.h"

int 	*check(int argc, char **argv)
{
	int	i;
	int	j;
	int	*a;

	a = malloc(sizeof (*a) * (argc - 1));
	if (a == NULL)
		return (NULL);
	i = 0;
	while (i < argc - 1)
	{
		if (ft_isnumber(argv[i + 1]) == 0)
			return (NULL);
		a[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	i = 0;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc - 1)
			if (a[i] == a[j++])
				return (NULL);
		i++;
	}
	return (a);
}

void	sa(int *stack)
{
	int	x;
	int	y;

	x = *stack;
	y = *(stack + 1);
	*stack = y;
	*(stack + 1) = x;
}

void	sb(int *stack)
{
	int	x;
	int	y;

	x = *stack;
	y = *(stack + 1);
	*stack = y;
	*(stack + 1) = x;
}

void	ra(int *stack, int len)
{
	int	temp;
	int	i;

	temp = *stack;
	i = 1;
	while (i < len)
	{
		*(stack + i - 1) = *(stack + i);
		i++;
	}
	*(stack + i - 1) = temp;
}

void	rb(int *stack, int len)
{
	int	temp;
	int	i;

	temp = *stack;
	i = 1;
	while (i < len)
	{
		*(stack + i - 1) = *(stack + i);
		i++;
	}
	*(stack + i - 1) = temp;
}

void	rra(int *stack, int len)
{
	int	temp;
	int	i;

	temp = *(stack + len - 1);
	i = len - 1;
	while (i > 0)
	{
		*(stack + i) = *(stack + i - 1);
		i--;
	}
	*(stack + i) = temp;
}

void	rrb(int *stack, int len)
{
	int	temp;
	int	i;

	temp = *(stack + len - 1);
	i = len - 1;
	while (i > 0)
	{
		*(stack + i) = *(stack + i - 1);
		i--;
	}
	*(stack + i) = temp;
}

void	pa(int **a, int **b, int *len_a, int *len_b)
{
	if (len_b == 0)
		return ;
	if (len_a != 0)
		*a = *a - 1;
	**a = **b;
	*b = *b + 1;
	*len_a = *len_a + 1;
	*len_b = *len_b - 1;
}

void	pb(int **a, int **b, int *len_a, int *len_b)
{
	if (*len_a == 0)
		return ;
	if (*len_b != 0)
		*b = *b - 1;
	**b = **a;
	*a = *a + 1;
	*len_a = *len_a - 1;
	*len_b = *len_b + 1;
}

void	print_a(int *a, int len_a)
{
	while (len_a-- > 0)
	{
		ft_putstr_fd("a: ", 1);
		ft_putnbr_fd(*a++, 1);
		ft_putstr_fd("\n", 1);
	}
	ft_putstr_fd("\n", 1);
}

void	print_b(int *b, int len_b)
{
	while (len_b-- > 0)
	{
		ft_putstr_fd("b: ", 1);
		ft_putnbr_fd(*b++, 1);
		ft_putstr_fd("\n", 1);
	}
	ft_putstr_fd("\n", 1);
}
int		ft_isnumber(const char *str)
{
	size_t			i;

	i = 0;
	if (str[i] == '-')
		i++;
	while (str[i])
	{
		if (ft_isdigit(str[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}

void	print_ins(char **ins)
{
	int		len;
	int 	i;

	len = 0;
	while (ins[len] != NULL)
		len++;
	i = 0;
	ft_putnbr_fd(len, 1);
	ft_putstr_fd("\n", 1);
	while (i < len)
	{
		ft_putstr_fd(ins[i++], 1);
		ft_putstr_fd("\n", 1);
	}
	//free(ins);
}
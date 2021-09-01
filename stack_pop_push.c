#include <stdio.h>
#include <stdlib.h>
int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
int	ft_isspace(int c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}
int	ft_atoi(const char *str)
{
	unsigned long	result;
	size_t			i;
	int				sign;

	result = 0;
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
		sign = -1;
	else
		sign = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (ft_isdigit(str[i]))
	{
		result = result * 10 + (str[i++] - '0');
	}
	return ((int)(result * sign));
}

int	push(int **stack, int number)
{
	int t;

	*stack += 1;
	**stack = number;

	return number;
}

int	pop(int **stack)
{
	int number;

	number = **stack;
	*stack -= 1;

	return number;
}

void	sa(int **stack)
{
	int	x;
	int y;

	x = pop(stack);
	y = pop(stack);
	push(stack, x);
	push(stack, y);
}

void	ra(int **stack)
{
	
}

int	main(int argc, char **argv)
{
	int	*stack;
	int	i;
	int	h;

	stack = malloc(sizeof (*stack) * (argc));
	i = argc - 1;

	while (i > 0)
	{
		h = ft_atoi(argv[i]);
		push(&stack, h);
		printf("stack: %d\n", *stack);
		i--;
	}
	sa(&stack);
	i = 0;
	while (i < argc - 1)
	{
		printf("stack: %d\n", pop(&stack));
		i++;
	}
	return 0;
}

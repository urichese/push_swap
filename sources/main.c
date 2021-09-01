#include "push_swap.h"


int	maintest()
{
	int		i;
	int 	len;
	char	**temp;

	i = 1;
	temp = ft_calloc(2, sizeof (char *));
	temp[0] = "qwerty";
	temp[1] = NULL;
	//printf("%s\n", temp[1]);
	len = 0;
	while (temp[len] != NULL)
		len++;
	free(temp);
	i = 1;
	temp = ft_calloc(2, sizeof (char *));
	temp[0] = "qwerty";
	temp[1] = NULL;
	printf("%s\n", temp[1]);
	len = 0;
	while (temp[len] != NULL)
		len++;
	free(temp);
	return (0);
}

int	main(int argc, char **argv)
{
	int	*a;
	int	*b;
	int	len_a;
	int	len_b;
	char	**ins;

	len_a = argc - 1;
	len_b = 0;
	b = malloc(sizeof (*a) * (len_a));
	b = b + len_a - 1;
	a = check(argc, argv);
	if (a == NULL)
	{
		ft_putstr_fd("Error", 2); // ---
		return (0);
	}
	//print_a(a, len_a);
	ins = bubble_sort(&a, &b, &len_a, &len_b);
	//hoara_sort(&a, &b, &len_a, &len_b);
	//print_b(b, len_b);
	print_ins(ins);
	return (0);
}

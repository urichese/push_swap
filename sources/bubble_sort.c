#include "push_swap.h"

char	**put_ins(char **ins, char *name)
{
	int		i;
	char	**temp;

	i = 0;
	while (ins[i] != NULL)
		i++;
	temp = ft_calloc(i+2, sizeof (char *));
	temp[i + 1] = NULL;
	ins[i] = name;
	while (i > -1)
	{
		temp[i] = ins[i];
		i--;
	}
		temp[i] = ins[i];
	//print_ins(temp);
	free(ins);
	ins = NULL;
	return (temp);
}

char	**bubble_sort(int **a, int **b, int *len_a, int *len_b)
{
	int		i;
	int		j;
	char	**ins;

	ins = ft_calloc(1, sizeof (char *));
	*ins = NULL;
	i = *len_a;
	while (i > 1)
	{
		j = *len_a;
		while (j-- > 0)
		{
			if (**a < *(*a + 1))
			{
				sa(*a);
				ins = put_ins(ins, "sa");
			}
			ra(*a, i--);
			ins = put_ins(ins, "ra");
		}
		pb(a, b, len_a, len_b);
		ins = put_ins(ins, "pb");
	}
	pb(a, b, len_a, len_b);
	ins = put_ins(ins, "pb");
	return (ins);
}

#include "push_swap.h"

void	hoara_sort(int **a, int **b, int *len_a, int *len_b)
{
	int	i;
	int	j;

	i = *len_a;
	while (i > 1)
	{
		j = *len_a;
		while (j-- > 1)
		{
			if (**a < *(*a + 1))
				sa(*a);
			if (**a < *(*a + *len_a - 1))
				rra(*a, *len_a);
			ra(*a, i);
		}
		pb(a, b, len_a, len_b);
		//print_b(*b, *len_b);
		//print_a(*a, *len_a);
		i--;
	}
	pb(a, b, len_a, len_b);
}



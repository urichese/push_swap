#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;

	result = malloc(size * count);
	if (result == NULL)
		return (NULL);
	ft_bzero (result, size * count);
	return (result);
}

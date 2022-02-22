#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*res;

	res = malloc(n * size);
	if (!res)
		return (0);
	ft_bzero(res, n * size);
	return (res);
}

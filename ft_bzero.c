#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*mid;

	i = 0;
	mid = s;
	while (i < n)
	{
		mid[i] = mid[i] >> 8;
		mid[i] = mid[i] << 8;
		i++;
	}
}

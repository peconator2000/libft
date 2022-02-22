#include "libft.h"

void	*ft_memset(void *ptr, int val, size_t num)
{
	unsigned char	*ptr2;
	size_t			i;

	ptr2 = ptr;
	i = 0;
	while (i < num)
	{
		ptr2[i] = ptr2[i] >> 8;
		ptr2[i] = ptr2[i] << 8;
		ptr2[i] += val;
		i++;
	}
	return (ptr);
}

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dst2;
	const char	*src2;
	int			i;

	if (dst == 0 && src == 0)
		return (0);
	dst2 = dst;
	src2 = src;
	i = -1;
	while (++i < (int)n)
	{
		*dst2 = *src2;
		dst2++;
		src2++;
	}
	return (dst);
}

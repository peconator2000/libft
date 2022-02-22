#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*dst2;
	unsigned const char	*src2;
	int					i;

	if (dst == 0 && src == 0)
		return (0);
	dst2 = dst;
	src2 = src;
	i = -1;
	while (++i < (int)n)
	{
		*dst2 = *src2;
		if (*src2 == (unsigned char)c)
			return (&dst[i + 1]);
		dst2++;
		src2++;
	}
	return (0);
}

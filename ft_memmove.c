#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dst2;
	const unsigned char	*src2;
	int					i;

	dst2 = dst;
	src2 = src;
	i = 0;
	if (dst > src)
	{
		i = (int)len;
		while (--i >= 0)
			dst2[i] = src2[i];
	}
	else if (dst < src)
	{
		i = -1;
		while (++i < (int)len)
			dst2[i] = src2[i];
	}
	return (dst);
}

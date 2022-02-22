#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char	*s2;
	int					i;

	i = -1;
	s2 = s;
	while (++i < (int)n)
		if (s2[i] == (unsigned char)c)
			return ((void *)&s[i]);
	return (0);
}

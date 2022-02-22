#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int			i;
	const char	*s11;
	const char	*s22;

	i = -1;
	s11 = s1;
	s22 = s2;
	if (s2 == 0 && s1 == 0)
		return (0);
	while (++i < (int)n)
		if (s11[i] != s22[i])
			return ((unsigned char)s11[i] - (unsigned char)s22[i]);
	return (0);
}

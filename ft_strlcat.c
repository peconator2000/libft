#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	enddst;
	size_t	dstsz;
	size_t	srcsz;
	size_t	strtsz;

	srcsz = ft_strlen(src);
	enddst = 0;
	strtsz = size;
	while (dst[enddst] && strtsz)
	{
		enddst++;
		strtsz--;
	}
	dstsz = enddst;
	if (!strtsz)
		return (size + srcsz);
	while (*src && enddst < size - 1)
	{
		dst[enddst++] = *src;
		src++;
	}
	dst[enddst] = '\0';
	return (dstsz + srcsz);
}

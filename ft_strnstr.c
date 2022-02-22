#include "libft.h"

static int	is_eq(const char *str1, const char *str2)
{
	int	i;

	i = 0;
	while (str2[i])
	{
		if (str1[i] != str2[i])
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strnstr(const char *big, const char *small, size_t len)
{
	size_t	i;

	i = 0;
	if (small[0] == '\0')
		return ((char *)big);
	while (*big != 0 && (len) >= i + ft_strlen(small))
	{
		if (*big == small[0])
		{
			if (is_eq(big, small))
				return ((char *)(big));
		}
		big++;
		i++;
	}
	return (0);
}

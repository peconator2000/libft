#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	n;
	char	*res;

	n = ft_strlen(s1);
	res = malloc(sizeof(char) * (n + 1));
	if (!res)
		return (0);
	res[n] = '\0';
	while (n-- > 0)
		res[n] = s1[n];
	return (res);
}

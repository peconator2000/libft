#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	int		i;

	i = -1;
	if (!s)
		return (0);
	if (start >= ft_strlen(s))
	{
		res = malloc(sizeof(*res));
		res[0] = '\0';
		return (res);
	}
	else if (ft_strlen(s) > (len + start))
		res = malloc((len + 1) * sizeof(*res));
	else
	{
		res = malloc((ft_strlen(s) - start + 2) * sizeof(*res));
		len = ft_strlen(s) - start;
	}
	if (!res)
		return (0);
	while (++i < (int)len)
		res[i] = s[start + i];
	res[i] = '\0';
	return (res);
}

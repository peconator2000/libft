#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*res;
	unsigned int	i;

	i = -1;
	if (!s1 || !s2)
		return (0);
	res = malloc(sizeof(*res) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!res)
		return (0);
	while (*s1)
		res[++i] = *(s1++);
	while (*s2)
		res[++i] = *(s2++);
	i++;
	res[i] = '\0';
	return (res);
}

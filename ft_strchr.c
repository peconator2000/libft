#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((int)str[i] == (unsigned char)ch)
			return ((char *)&str[i]);
		i++;
	}
	if (str[i] == (unsigned char)ch)
		return ((char *)&str[i]);
	return (0);
}

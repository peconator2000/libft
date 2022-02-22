#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	const char	*last = 0;
	int			i;

	i = 0;
	while (str[i])
	{
		if ((int)str[i] == (unsigned char)ch)
			last = &str[i];
		i++;
	}
	if ((int)str[i] == (unsigned char)ch)
		last = &str[i];
	return ((char *)last);
}

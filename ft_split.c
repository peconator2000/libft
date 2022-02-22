#include "libft.h"

static int	how_sym(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static int	how_string(const char *s, char c)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	if (!c)
		return (1);
	while (*s)
	{
		if (*s && *s != c)
		{
			while (*s && *s != c)
				s++;
			res++;
		}
		else
			s++;
	}
	return (res);
}

char	**ft_split(const char *s, char c)
{
	size_t		i;
	int			k;
	int			strsz;
	char		**res;
	size_t		len;

	i = 0;
	k = 0;
	if (!s)
		return (0);
	res = malloc(sizeof(*res) * (how_string(s, c) + 1));
	if (!res)
		return (0);
	len = ft_strlen(s);
	while (i < len)
	{
		strsz = how_sym(&s[i], c);
		if (strsz)
			res[k++] = ft_substr(s, i, strsz);
		i = i + strsz + 1;
	}
	res[k] = NULL;
	return (res);
}

#include "libft.h"
static int	not_inset(int c, const char *set)
{
	int	i;

	i = -1;
	while (set[++i])
		if (c == set[i])
			return (0);
	return (1);
}

static char	*new_str(int start, int end, const char *str)
{
	char	*res;
	int		i;

	i = 0;
	res = malloc(sizeof(*res) * (end - start + 2));
	if (!res)
		return (0);
	while (start <= end)
		res[i++] = str[start++];
	res[i] = '\0';
	return (res);
}

char	*ft_strtrim(char const *str, char const *set)
{
	int	start;
	int	end;

	start = 0;
	if (!str || !set)
		return (0);
	if (!ft_strlen(str))
		return (new_str(0, 0, str));
	while (str[start])
	{
		if (not_inset(str[start], set))
			break ;
		else
			start++;
	}
	if (!str[start])
		return (ft_calloc(sizeof(char *), 1));
	end = ft_strlen(str) - 1;
	while (str[end])
		if (not_inset(str[end], set))
			break ;
	else
		end --;
	return (new_str(start, end, str));
}

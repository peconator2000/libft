#include "libft.h"

static int	result(const char *str)
{
	int			res;
	long long	max;

	res = 0;
	max = 0;
	while (*str >= 48 && *str <= 57)
	{
		res = res * 10 + *str - 48;
		max = max * 10 + *str - 48;
		str++;
		if ((*str >= 48 && *str <= 57) && (max * 10 + *str) < 0)
			return (-1);
	}
	return (res);
}

int	ft_atoi(const char *str)
{
	int	znak;
	int	res;

	znak = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == 43 || *str == 45)
	{
		if (*str == 45)
			znak *= -1;
		str++;
	}
	res = result(str);
	if (res == -1)
	{
		if (znak == 1)
			return (-1);
		else
			return (0);
	}
	return (res * znak);
}

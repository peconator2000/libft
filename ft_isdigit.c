#include "libft.h"

int	ft_isdigit(int ch)
{
	if (ch >= 48 && ch <= 57)
		return (ch);
	else
		return (0);
}

#include "libft.h"

int	ft_isalnum(int ch)
{
	if ((ch >= 48 && ch <= 57) || (ch >= 65 && ch <= 90)
		|| (ch >= 97 && ch <= 122))
		return (ch);
	else
		return (0);
}

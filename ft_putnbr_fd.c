#include "libft.h"

static void	puuuut(char c, long int n, int fd)
{
	if (n)
	{
		puuuut(c, n / 10, fd);
		c = n % 10 + 48;
		write(fd, &c, 1);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	long int	num;
	char		c;

	num = n;
	c = 0;
	if (n < 0)
	{
		num *= -1;
		write(fd, "-", 1);
	}
	else if (n == 0)
		write(fd, "0", 1);
	puuuut(c, num, fd);
}

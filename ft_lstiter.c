#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*iter;

	iter = lst;
	while (iter)
	{
		f(iter->content);
		iter = iter->next;
	}
}

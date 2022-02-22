#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*mid;

	if (!(*lst))
		return ;
	while ((*lst))
	{
		mid = (*lst)->next;
		(*lst)->next = 0;
		del((*lst)->content);
		free((*lst));
		*lst = mid;
	}
}

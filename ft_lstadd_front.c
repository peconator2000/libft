#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *newelem)
{
	if (!newelem)
		return ;
	if (lst == 0)
	{
		*lst = newelem;
		return ;
	}
	newelem->next = *lst;
	*lst = newelem;
}

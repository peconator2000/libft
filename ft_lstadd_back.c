#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *newel)
{
	t_list	*mid;

	if (!newel)
		return ;
	if (!(*lst))
	{
		*lst = newel;
		return ;
	}
	mid = *lst;
	while (mid->next)
		mid = mid->next;
	mid->next = newel;
}

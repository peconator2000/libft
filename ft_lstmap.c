#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newel;
	t_list	*head;

	head = 0;
	while (lst)
	{
		newel = ft_lstnew(f(lst->content));
		if (!newel)
		{
			if (head != 0)
				ft_lstclear(&head, del);
			return (0);
		}
		ft_lstadd_back(&head, newel);
		lst = lst->next;
	}
	return (head);
}

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newel;

	newel = (t_list *)malloc(sizeof(*newel));
	if (!newel)
		return (0);
	newel->content = content;
	newel->next = 0;
	return (newel);
}

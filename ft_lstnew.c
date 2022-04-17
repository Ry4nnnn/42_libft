#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list	*res;

	res = (t_list *)malloc(sizeof(t_list));
	// if (!res)
	// 	return (0);
	res->content = content;
	res->next = 0;
	return (res);
}
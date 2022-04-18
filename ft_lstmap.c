#include "libft.h"
#include <stdio.h>
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new;
	t_list **head;
	t_list *temp;
	// t_list	*changed;

	if (!lst || !f)
		return (0);
	new = NULL;
	// ft_lstadd_back(&new, ft_lstnew(lst->content));
	while (lst)
	{
		// temp = ft_lstnew(lst->content);
		temp = f(lst);
		if (!temp)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		if (!new) // new == NULL || new == 0
			new = temp;
		else
			ft_lstadd_back(&new, temp);
		lst = lst->next;
	}
	temp->next = 0;
	return (new);
}

// void * addOne(void * p)
// {
// 	void * r = malloc(sizeof(int));
// 	*(int*)r = *(int*)p + 1;
// 	return (r);
// }

// int main()
// {
// 	int	tab = {0, 1, 2, 3};

// 	t_list * l =  ft_lstnew(tab);
// 	for (int i = 1; i < 4; ++i)
// 		ft_lstadd_back(&l, ft_lstnew(tab + i));
// 	t_list * mapped = ft_lstmap(l, addOne, free);
// 	t_list	*iter = l;
// 	while(iter){
// 		printf("%d\n", (int)iter->content);
// 		iter = iter->next;
// 	}
// 	printf("\n");
// 	iter = mapped;
// 	while(iter){
// 		printf("%d\n", (int)iter->content);
// 		iter = iter->next;
// 	}
// }
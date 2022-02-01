#include "list.h"

void	list_del(t_list **lst, void (*del)(void*))
{
	t_element	*head;
	t_element	*next;

	next = NULL;
	head = (*lst)->head;
	if (head == NULL)
		return ;
	while (head != NULL)
	{
		next = head->next;
		del(head->content);
		free(head);
		head = next;
	}
    free(*lst);
	*lst = NULL;
}
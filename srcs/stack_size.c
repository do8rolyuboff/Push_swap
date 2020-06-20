#include "../includes/push_swap.h"

int		stack_size(t_stack *head)
{
	int		i;
	t_stack	*list;

	if (!head)
		return (0);
	list = head;
	i = 0;
	while (list)
	{
		i++;
		list = list->next;
	}
	return (i);
}

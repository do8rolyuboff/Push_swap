#include "../includes/push_swap.h"

int			is_sorted(t_stack *a)
{
	t_stack	*tmp;

	tmp = a;
	if (!tmp)
		return (0);
	while (tmp && tmp->next && tmp->data < tmp->next->data)
		tmp = tmp->next;
	if (tmp && tmp->next)
		return (0);
	return (1);
}

#include "../includes/push_swap.h"

void        ra(t_stack **stack_a, int p)
{
	t_stack	*first;
	t_stack	*last;

	if (!*stack_a)
		return ;
	first = *stack_a;
	last = *stack_a;
	while (last->next != NULL)
		last = last->next;
	*stack_a = first->next;
	first->next = NULL;
	last->next = first;
	first->prev = last;
	if (p == 0)
		ft_putendl("ra");
}

void        rb(t_stack **stack_b, int p)
{
	t_stack	*first;
	t_stack	*last;

	if (!*stack_b)
		return ;
	first = *stack_b;
	last = *stack_b;
	while (last->next != NULL)
		last = last->next;
	*stack_b = first->next;
	first->next = NULL;
	last->next = first;
	first->prev = last;
	if (p == 0)
		ft_putendl("rb");
}

void        rr(t_stack **stack_a, t_stack **stack_b)
{
	if (!*stack_a || !*stack_b)
		return ;
	ra(stack_a, 1);
	rb(stack_b, 1);
	ft_putendl("rr");
}

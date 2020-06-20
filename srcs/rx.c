#include "../includes/push_swap.h"

void			ra(t_stack **stack_a, int p)
{
	t_stack		*first;
	t_stack		*last;

	if (!*stack_a || stack_size(*stack_a) < 2)
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
		ft_putendl_fd("ra", 1);
}

void			rb(t_stack **stack_b, int p)
{
	t_stack		*first;
	t_stack		*last;

	if (!*stack_b || stack_size(*stack_b) < 2)
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
		ft_putendl_fd("rb", 1);
}

void			rr(t_stack **stack_a, t_stack **stack_b, int p)
{
	if (!*stack_a || stack_size(*stack_a) < 2
		|| !*stack_b || stack_size(*stack_b) < 2)
		return ;
	ra(stack_a, 1);
	rb(stack_b, 1);
	if (p == 0)
		ft_putendl_fd("rr", 1);
}

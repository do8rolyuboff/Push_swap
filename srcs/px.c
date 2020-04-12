#include "../includes/push_swap.h"

void		pa(t_stack **stack_a, t_stack **stack_b)
{
	t_stack *tmp;

	if (!*stack_b)
		return ;
	tmp = add_head((*stack_b)->data);
	if (*stack_a)
	{
		tmp->next = (*stack_a);
		(*stack_a) = tmp;
	}
	else
		*stack_a = tmp;
	if ((*stack_b)->next)
	{
		*stack_b = (*stack_b)->next;
		(*stack_b)->prev = NULL;
	}
	else
		(*stack_b) = NULL;
}

void		pb(t_stack **stack_b, t_stack **stack_a)
{
	t_stack *tmp;

	if (!*stack_a)
		return ;
	tmp = add_head((*stack_a)->data);
	if (*stack_b)
	{
		tmp->next = (*stack_b);
		(*stack_b) = tmp;
	}
	else
		*stack_b = tmp;
	if ((*stack_a)->next)
	{
		*stack_a = (*stack_a)->next;
		(*stack_a)->prev = NULL;
	}
	else
		(*stack_a) = NULL;
}

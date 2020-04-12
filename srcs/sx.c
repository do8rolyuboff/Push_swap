#include "../includes/push_swap.h"

void 	sa(t_stack **stack_a)
{
	int i;

	if (!*stack_a)
		return ;
	if(*stack_a && (*stack_a)->next)
	{
		i = (*stack_a)->data;
		(*stack_a)->data = (*stack_a)->next->data;
		(*stack_a)->next->data = i;
	}
}

void 	sb(t_stack **stack_b)
{
	int i;

	if (!*stack_b)
		return ;
	if(*stack_b && (*stack_b)->next)
	{
		i = (*stack_b)->data;
		(*stack_b)->data = (*stack_b)->next->data;
		(*stack_b)->next->data = i;
	}
}

void 	ss(t_stack **stack_a, t_stack **stack_b)
{
    int i;

	if (!*stack_a || !*stack_b)
		return ;
    if(*stack_a && (*stack_a)->next)
    {
    	i = (*stack_a)->data;
    	(*stack_a)->data = (*stack_a)->next->data;
    	(*stack_a)->next->data = i;
    }
    if(*stack_b && (*stack_b)->next)
    {
    	i = (*stack_b)->data;
    	(*stack_b)->data = (*stack_b)->next->data;
    	(*stack_b)->next->data = i;
    }
}

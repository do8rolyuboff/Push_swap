#include "../includes/push_swap.h"

void 	sa(t_stack **stack_a)
{
	int i;

	if (!*stack_a || stack_size(*stack_a) < 2)
	{
		ft_putendl("Error");
		return;
	}
	if(*stack_a && (*stack_a)->next)
	{
		i = (*stack_a)->data;
		(*stack_a)->data = (*stack_a)->next->data;
		(*stack_a)->next->data = i;
	}
	ft_putendl("sa");

}

void 	sb(t_stack **stack_b)
{
	int i;

	if (!*stack_b || stack_size(*stack_b) < 2)
	{
		ft_putendl("Error");
		return;
	}
	if(*stack_b && (*stack_b)->next)
	{
		i = (*stack_b)->data;
		(*stack_b)->data = (*stack_b)->next->data;
		(*stack_b)->next->data = i;
	}
	ft_putendl("sb");
}

void 	ss(t_stack **stack_a, t_stack **stack_b)
{
    int i;

	if (!*stack_a || stack_size(*stack_a) < 2 || !*stack_b || stack_size(*stack_b) < 2)
	{
		ft_putendl("Error");
		return;
	}
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
	ft_putendl("ss");
}

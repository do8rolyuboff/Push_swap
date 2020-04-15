#include "../includes/push_swap.h"

void	rrb(t_stack **stack_b, int p)
{
	t_stack	*last;
	t_stack	*second_last;

	if (!*stack_b)
		return ;
	last = *stack_b;
	second_last = NULL;
	while (last->next != NULL)
	{
		second_last = last;
		last = last->next;
	}
	second_last->next = NULL;
	last->prev = NULL;
	last->next = *stack_b;
	*stack_b = last;
	if (p == 0)
		ft_putendl("rrb");
}

void	rra(t_stack **stack_a, int p)
{
	t_stack	*last;
	t_stack	*second_last;

	if (!*stack_a)
		return ;
	last = *stack_a;
	second_last = NULL;
	while (last->next != NULL)
	{
		second_last = last;
		last = last->next;
	}
	second_last->next = NULL;
	last->prev = NULL;
	last->next = *stack_a;
	*stack_a = last;
	if (p == 0)
		ft_putendl("rra");
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	if (!*stack_a || !*stack_b)
		return ;
    rra(stack_a, 1);
    rrb(stack_b, 1);
	ft_putendl("rrr");
}

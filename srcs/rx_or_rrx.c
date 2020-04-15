#include "../includes/push_swap.h"

void	rb_or_rrb(t_stack **stack_b, int pos)
{
	int		size;

	size = stack_size(*stack_b);
	if (pos > size / 2)
	{
		pos = size - pos;
		while (pos != 0)
		{
			rrb(stack_b, 0);
			pos--;
		}
	}
	else if (pos <= size / 2)
	{
		while (pos != 0)
		{
			rb(stack_b, 0);
			pos--;
		}
	}
}

void	ra_or_rra(t_stack **stack_a, int pos)
{
	int		size;

	size = stack_size(*stack_a);
	if (pos > size / 2)
	{
		pos = size - pos;
		while (pos != 0)
		{
			rra(stack_a, 0);
			pos--;
		}
	}
	else if (pos <= size / 2)
	{
		while (pos != 0)
		{
			ra(stack_a, 0);
			pos--;
		}
	}
}

#include "../includes/push_swap.h"

void			return_in_a(t_stack **stack_a, t_stack **stack_b,
				int i, int range_max)
{
	int			pos;

	while (*stack_b)
	{
		while (i > 0 && i >= range_max - 5)
		{
			pos = min_pos(stack_b, i);
			rb_or_rrb(stack_b, pos);
			pa(stack_a, stack_b, 0);
			i--;
		}
		range_max -= 5;
	}
}

void			sort_stack(t_stack **stack_a, t_stack **stack_b, int num)
{
	int			range_max;
	int			i;

	range_max = 0;
	i = 1;
	while (*stack_a)
	{
		range_max += num;
		while (i <= range_max)
		{
			if (!(*stack_a))
				break ;
			if ((*stack_a)->rank <= range_max)
			{
				pb(stack_b, stack_a, 0);
				i++;
			}
			else
				ra(stack_a, 0);
		}
	}
	i--;
	return_in_a(stack_a, stack_b, i, range_max);
}

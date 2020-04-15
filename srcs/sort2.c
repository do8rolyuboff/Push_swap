#include "../includes/push_swap.h"

int			large_pos(t_stack **stack, int num)
{
	int		i;
	int		pos;
	t_stack	*node;

	node = *stack;
	i = 0;
	pos = 0;
	while (node)
	{
		if (node->norm == num)
		{
			pos = i;
			break ;
		}
		node = node->next;
		i++;
	}
	return (pos);
}

void		rotate_x(t_stack **h, char c, int pos)
{
	int		size;

	size = stack_size(*h);
	if (pos > size / 2)
	{
		pos = size - pos;
		while (pos-- != 0)
			(c == 'a') ? rra(h, 0) : rrb(h, 0);
	}
	else if (pos <= size / 2)
	{
		while (pos-- != 0)
			(c == 'a') ? ra(h, 0) : rb(h, 0);
	}
}

void		push_b(t_stack **a, t_stack **b, int i, int max)
{
	int		pos;

	while (*b)
	{
		while (i > 0 && i >= max - 5)
		{
			pos = large_pos(b, i);
			rotate_x(b, 'b', pos);
			pa(a, b);
			i--;
		}
		max -= 5;
	}
}

void		sort_all(t_stack **stack_a, t_stack **stack_b)
{
	int		i;
	int		max;
	int		size;

	i = 1;
	max = 0;
	size = stack_size(*stack_a);
	while (*stack_a)
	{
		max += (size <= 100) ? size / 5 - 2 : size / 11 - 2;
		while (i <= max)
		{
			if (!(*stack_a))
				break ;
			if ((*stack_a)->norm <= max)
			{
				pb(stack_b, stack_a);
				i++;
			}
			else
				ra(stack_a, 0);
		}
	}
	i--;
	push_b(stack_a, stack_b, i, max);
}
#include "../includes/push_swap.h"

int				min_pos(t_stack **head, int smallest)
{
	t_stack		*node;
	int			pos;
	int			i;

	node = *head;
	pos = 0;
	i = 0;
	while (node)
	{
		if (node->rank == smallest)
		{
			pos = i;
			break ;
		}
		node = node->next;
		i++;
	}
	return (pos);
}

void			sort_2(t_stack **stack_a)
{
	if ((*stack_a)->data > (*stack_a)->next->data)
		sa(stack_a, 0);
}

void			sort_3(t_stack **stack_a)
{
	int			num1;
	int			num2;
	int			num3;

	num1 = (*stack_a)->data;
	num2 = (*stack_a)->next->data;
	num3 = (*stack_a)->next->next->data;
	if (num1 > num2 && num1 > num3 && num2 > num3)
	{
		sa(stack_a, 0);
		rra(stack_a, 0);
	}
	else if (num2 > num1 && num2 > num3 && num3 > num1)
	{
		sa(stack_a, 0);
		ra(stack_a, 0);
	}
	else if (num1 > num2 && num1 < num3 && num3 > num2)
		sa(stack_a, 0);
	else if (num1 > num3 && num3 > num2 && num1 > num2)
		ra(stack_a, 0);
	else if (num3 < num1 && num3 < num2 && num1 < num2)
		rra(stack_a, 0);
}

void			sort_5(t_stack **stack_a, t_stack **stack_b)
{
	int			i;
	int			pos;
	int			size;

	size = stack_size(*stack_a);
	i = 0;
	while (i < (size - 3))
	{
		pos = min_pos(stack_a, (i + 1));
		ra_or_rra(stack_a, pos);
		if (is_sorted(*stack_a))
			return ;
		pb(stack_b, stack_a, 0);
		i++;
	}
	sort_3(stack_a);
	while (i > 0)
	{
		pa(stack_a, stack_b, 0);
		i--;
	}
}

#include "../includes/push_swap.h"

int		find_nlargest_pos(t_stack **head, int largest)
{
	t_stack	*tmp;
	int		pos;
	int		i;

	tmp = *head;
	pos = 0;
	i = 0;
	while (tmp)
	{
		if (tmp->rank == largest)
		{
			pos = i;
			break ;
		}
		tmp = tmp->next;
		i++;
	}
	return (pos);
}

void	pushback_b(t_stack **stack_a, t_stack **stack_b, int i, int range_max,  int num)
{
	int		pos;

	while (*stack_b)
	{
		while (i > 0 && i >= range_max - num)
		{
			pos = find_nlargest_pos(stack_b, i);
			rb_or_rrb(stack_b, pos);
			pa(stack_a, stack_b);
			i--;
		}
		range_max -= num;
	}
}

void	sort_stack(t_stack **stack_a, t_stack **stack_b, int num)
{
	int		range_max;
	int		i;

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
				pb(stack_b, stack_a);
				i++;
			}
			else
				ra(stack_a, 0);
		}
	}
	i--;
	pushback_b(stack_a, stack_b, i, range_max, num);
}

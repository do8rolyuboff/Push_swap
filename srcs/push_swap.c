#include "../includes/push_swap.h"

int		ft_max(t_stack *stack_a)
{
	int max;

	max = stack_a->data;
	while (stack_a)
	{
		if (stack_a->data > max)
			max = stack_a->data;
		stack_a = stack_a->next;
	}
	return (max);
}

int		ft_min(t_stack *stack_a)
{
	int min;

	min = stack_a->data;
	while (stack_a)
	{
		if (stack_a->data < min)
			min = stack_a->data;
		stack_a = stack_a->next;
	}
	return (min);
}
void		norm(t_stack **stacka)
{
	int		n;
	t_stack *slow;
	t_stack	*fast;

	slow = *stacka;
	while (slow)
	{
		n = stack_size(*stacka);
		slow->norm = n;
		fast = *stacka;
		while (fast)
		{
			if (slow->data < fast->data)
				slow->norm--;
			fast = fast->next;
		}
		slow = slow->next;
	}
}

void		sorting(t_stack **stack_a, t_stack **stack_b)
{
	if (stack_size(*stack_a) == 2)
		sort_2(stack_a);
	else if (stack_size(*stack_a) == 3)
		sort_3(stack_a);
	else if (stack_size(*stack_a) <= 5)
		sort_5(stack_a, stack_b);
	else if (stack_size(*stack_a) > 5)
		sort_all(stack_a, stack_b);
}
int				main(int argc, char **argv)
{
	t_stack		*stack_a;
	t_stack		*stack_b;

	stack_a = init_stack(argv);
	stack_b = NULL;
	if (!(argc == 1 || check_args(argc, argv) || check_dup(stack_a)))
	{
		if (!(is_sorted(stack_a)))
		{
			norm(&stack_a);
			sorting(&stack_a, &stack_b);
		}
	}
	else
		ft_putendl("Error");
	/* free */
	return (0);
}

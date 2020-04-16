#include "../includes/push_swap.h"
void		ranking(t_stack **stacka)
{
	int		n;
	t_stack *slow;
	t_stack	*fast;

	slow = *stacka;
	while (slow)
	{
		n = stack_size(*stacka);
		slow->rank = n;
		fast = *stacka;
		while (fast)
		{
			if (slow->data < fast->data)
				slow->rank--;
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
	else if (stack_size(*stack_a) <= 20)
		sort_stack(stack_a, stack_b, 5);
	else if (stack_size(*stack_a) <= 50)
		sort_stack(stack_a, stack_b, 13);
	else if (stack_size(*stack_a) <= 100)
		sort_stack(stack_a, stack_b, 17);
	else if (stack_size(*stack_a) <= 250)
		sort_stack(stack_a, stack_b, 30);
	else if (stack_size(*stack_a) <= 500)
		sort_stack(stack_a, stack_b, 44);
	else if (stack_size(*stack_a) > 500)
		sort_stack(stack_a, stack_b, 60);
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
			ranking(&stack_a);
			sorting(&stack_a, &stack_b);
		}
	}
	else
		ft_putendl("Error");
	free_stacks(&stack_a, &stack_b);
	return (0);
}

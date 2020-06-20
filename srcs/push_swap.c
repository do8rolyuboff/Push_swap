#include "../includes/push_swap.h"

void			ranking(t_stack **stack_a)
{
	int			n;
	t_stack		*slow;
	t_stack		*fast;

	slow = *stack_a;
	while (slow)
	{
		n = stack_size(*stack_a);
		slow->rank = n;
		fast = *stack_a;
		while (fast)
		{
			if (slow->data < fast->data)
				slow->rank--;
			fast = fast->next;
		}
		slow = slow->next;
	}
}

void			sorting(t_stack **stack_a, t_stack **stack_b)
{
	if (stack_size(*stack_a) == 2)
		sort_2(stack_a);
	else if (stack_size(*stack_a) == 3)
		sort_3(stack_a);
	else if (stack_size(*stack_a) <= 6)
		sort_5(stack_a, stack_b);
	else if (stack_size(*stack_a) <= 21)
		sort_stack(stack_a, stack_b, 5);
	else if (stack_size(*stack_a) <= 100)
		sort_stack(stack_a, stack_b, 15);
	else if (stack_size(*stack_a) <= 500)
		sort_stack(stack_a, stack_b, 40);
	else if (stack_size(*stack_a) > 500)
		sort_stack(stack_a, stack_b, 60);
}

int				main(int argc, char **argv)
{
	t_stack		*stack_a;
	t_stack		*stack_b;

	if (argc == 1)
		return (0);
	stack_a = init_stack(argv);
	stack_b = NULL;
	if (check_args(argc, argv) || check_dup(stack_a) || stack_a == NULL)
		ft_putendl_col_fd(RED, "Error: Invalid Input", 2);
	else
	{
		if (!(is_sorted(stack_a)))
		{
			ranking(&stack_a);
			sorting(&stack_a, &stack_b);
		}
	}
	free_stacks(&stack_a, &stack_b);
	return (0);
}

#include "../includes/push_swap.h"

void	sorting(t_stack **stack_a, t_stack **stack_b)
{
	int		size_a;

	size_a = stack_size(*stack_a);
	if (size_a == 2)
		sort_2(stack_a);
	else if (size_a == 3)
		sort_3(stack_a);
	else if (size_a > 3 && size_a <= 5)
		sort_5(stack_a, stack_b);
	else if (size_a > 5 && size_a <= 20)
		sort_20(stack_a, stack_b);
	else if (size_a > 20 && size_a <= 50)
		sort_50(stack_a, stack_b);
	else if (size_a > 50 && size_a <= 105)
		sort_100(stack_a, stack_b);
	else if (size_a > 105 && size_a <= 250)
		sort_250(stack_a, stack_b);
	else if (size_a > 250 && size_a <= 505)
		sort_500(stack_a, stack_b);
	else
		sort_me(stack_a, stack_b);
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
	    	sorting(&stack_a, &stack_b);
	} /* free */
	return (0);
}

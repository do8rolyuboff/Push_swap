#include "../includes/push_swap.h"

int				main(int argc, char **argv)
{
	t_stack		*stack_a;
	t_stack		*stack_b;

	if (argc == 1)
		return (0);
	stack_a = init_stack(argv);
	stack_b = NULL;
	if (stack_size(stack_a) == 1 || check_args(argc, argv) || check_dup(stack_a))
		ft_putendl("Error");
	else
	{
		operations(&stack_a, &stack_b);
		if (is_sorted(stack_a) && stack_b == NULL && stack_a != NULL)
			ft_putendl("OK");
		else
			ft_putendl("KO");
	}
	free_stacks(&stack_a, &stack_b);
	return (0);
}

#include "../includes/push_swap.h"

void	get_instruction(t_stack **stack_a, t_stack **stack_b, char *instruction)
{
	if (ft_strequ(instruction, "pa"))
		pa(stack_a, stack_b);
	else if (ft_strequ(instruction, "pb"))
		pb(stack_b, stack_a);
	else if (ft_strequ(instruction, "sa"))
		sa(stack_a);
	else if (ft_strequ(instruction, "sb"))
		sb(stack_b);
	else if (ft_strequ(instruction, "ra"))
		ra(stack_a);
	else if (ft_strequ(instruction, "rb"))
		rb(stack_b);
	else if (ft_strequ(instruction, "rra"))
		rra(stack_a);
	else if (ft_strequ(instruction, "rrb"))
		rrb(stack_b);
	else if (ft_strequ(instruction, "ss"))
		ss(stack_a, stack_b);
	else if (ft_strequ(instruction, "rr"))
		rr(stack_a, stack_b);
	else if (ft_strequ(instruction, "rrr"))
		rrr(stack_a, stack_b);
	else
		ft_putendl("Error");
}

void 	operations(t_stack **stack_a, t_stack **stack_b)
{
	char 	*instruction;

	while (get_next_line(0, &instruction) > 0)
	{
		if (!*instruction)
			break;
		get_instruction(stack_a, stack_b, instruction);
		if (is_sorted(*stack_a) && !*stack_b && *stack_a)
				break;
	}
	free(instruction);
}

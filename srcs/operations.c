#include "../includes/push_swap.h"

int			get_instruction(t_stack **stack_a,
							t_stack **stack_b, char *instruction)
{
	if (ft_strequ(instruction, "pa"))
		pa(stack_a, stack_b, 1);
	else if (ft_strequ(instruction, "pb"))
		pb(stack_b, stack_a, 1);
	else if (ft_strequ(instruction, "sa"))
		sa(stack_a, 1);
	else if (ft_strequ(instruction, "sb"))
		sb(stack_b, 1);
	else if (ft_strequ(instruction, "ss"))
		ss(stack_a, stack_b, 1);
	else if (ft_strequ(instruction, "ra"))
		ra(stack_a, 1);
	else if (ft_strequ(instruction, "rb"))
		rb(stack_b, 1);
	else if (ft_strequ(instruction, "rr"))
		rr(stack_a, stack_b, 1);
	else if (ft_strequ(instruction, "rra"))
		rra(stack_a, 1);
	else if (ft_strequ(instruction, "rrb"))
		rrb(stack_b, 1);
	else if (ft_strequ(instruction, "rrr"))
		rrr(stack_a, stack_b, 1);
	else
		return (0);
	return (1);
}

void		operations(t_stack **stack_a, t_stack **stack_b)
{
	char	*instruction;

	while (get_next_line(0, &instruction) > 0)
	{
		if (get_instruction(stack_a, stack_b, instruction))
			free(instruction);
		else
		{
			free(instruction);
			free_stacks(stack_a, stack_b);
			ft_putendl_col_fd(RED, "Error: Incorrect Operation", 2);
			exit(1);
		}
	}
}

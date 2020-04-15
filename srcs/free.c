#include "../includes/push_swap.h"

void			free_stack(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;

	while (*stack_a)
	{
		tmp = (*stack_a)->next;
		free(*stack_a);
		*stack_a = tmp;
	}
	while (*stack_b)
	{
		tmp = (*stack_b)->next;
		free(*stack_b);
		*stack_b = tmp;
	}
}

void		free_arg(char **str)
{
	int		i;

	i = 0;
	while (str[i])
		ft_strdel(&str[i++]);
	free(str);
}
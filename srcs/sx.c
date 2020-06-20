#include "../includes/push_swap.h"

void		sa(t_stack **stack_a, int p)
{
	int		i;

	if (!*stack_a || stack_size(*stack_a) < 2)
		return ;
	if (*stack_a && (*stack_a)->next)
	{
		i = (*stack_a)->data;
		(*stack_a)->data = (*stack_a)->next->data;
		(*stack_a)->next->data = i;
	}
	if (p == 0)
		ft_putendl_fd("sa", 1);
}

void		sb(t_stack **stack_b, int p)
{
	int		i;

	if (!*stack_b || stack_size(*stack_b) < 2)
		return ;
	if (*stack_b && (*stack_b)->next)
	{
		i = (*stack_b)->data;
		(*stack_b)->data = (*stack_b)->next->data;
		(*stack_b)->next->data = i;
	}
	if (p == 0)
		ft_putendl_fd("sb", 1);
}

void		ss(t_stack **stack_a, t_stack **stack_b, int p)
{
	int		i;

	if (!*stack_a || stack_size(*stack_a) < 2
		|| !*stack_b || stack_size(*stack_b) < 2)
		return ;
	if (*stack_a && (*stack_a)->next)
	{
		i = (*stack_a)->data;
		(*stack_a)->data = (*stack_a)->next->data;
		(*stack_a)->next->data = i;
	}
	if (*stack_b && (*stack_b)->next)
	{
		i = (*stack_b)->data;
		(*stack_b)->data = (*stack_b)->next->data;
		(*stack_b)->next->data = i;
	}
	if (p == 0)
		ft_putendl_fd("ss", 1);
}

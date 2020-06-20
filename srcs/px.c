#include "../includes/push_swap.h"

void		stack_add_head(t_stack **head, t_stack *node)
{
	t_stack	*tmp;

	if (!(head) || (!(node)))
		return ;
	tmp = *head;
	if (tmp)
	{
		tmp->prev = node;
		node->next = *head;
		node->prev = NULL;
		*head = node;
	}
	else
	{
		node->next = NULL;
		node->prev = NULL;
		*head = node;
	}
}

void		pa(t_stack **stack_a, t_stack **stack_b, int p)
{
	t_stack *tmp;

	if (!*stack_b)
		return ;
	if (stack_b != NULL)
	{
		tmp = *stack_b;
		if ((*stack_b)->next)
			*stack_b = (*stack_b)->next;
		else
			*stack_b = NULL;
		if (*stack_b)
			(*stack_b)->prev = NULL;
		stack_add_head(stack_a, tmp);
	}
	if (p == 0)
		ft_putendl_fd("pa", 1);
}

void		pb(t_stack **stack_b, t_stack **stack_a, int p)
{
	t_stack *tmp;

	if (!*stack_a)
		return ;
	tmp = *stack_a;
	if ((*stack_a)->next)
		*stack_a = (*stack_a)->next;
	else
		*stack_a = NULL;
	if (*stack_a)
		(*stack_a)->prev = NULL;
	stack_add_head(stack_b, tmp);
	if (p == 0)
		ft_putendl_fd("pb", 1);
}

#include "../includes/push_swap.h"

void		stack_add_head(t_stack **head, t_stack *node)
{
	t_stack	*tmp;

	if (!(head) || (!(node)))
	{
		ft_putendl("Error");
		return ;
	}
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

void		pa(t_stack **stack_a, t_stack **stack_b)
{
	t_stack *tmp;

	if (!*stack_b)
	{
		ft_putendl("Error");
		return ;
	}
	tmp = add_head((*stack_b)->data);
	if (*stack_a)
	{
		tmp->next = (*stack_a);
		(*stack_a) = tmp;
	}
	else
		*stack_a = tmp;
	if ((*stack_b)->next)
	{
		*stack_b = (*stack_b)->next;
		(*stack_b)->prev = NULL;
	}
	else
		(*stack_b) = NULL;
	ft_putendl("pa");
}

void		pb(t_stack **stack_b, t_stack **stack_a)
{
	t_stack *tmp;

	if (!*stack_a)
	{
		ft_putendl("Error");
		return ;
	}
	tmp = *stack_a;
	if ((*stack_a)->next)
		*stack_a = (*stack_a)->next;
	else
		*stack_a = NULL;
	if (*stack_a)
		(*stack_a)->prev = NULL;
	stack_add_head(stack_b, tmp);
	ft_putendl("pb");
}
#include "../includes/push_swap.h"


int			small_pos(t_stack **stack, int num)
{
	int		i;
	t_stack	*temp;

	i = 0;
	temp = *stack;
	while (temp->data != num)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}

int			small_num(t_stack **stack)
{
	int		i;
	t_stack	*temp;

	temp = *stack;
	i = temp->data;
	while (temp)
	{
		if (temp->data < i)
			i = temp->data;
		temp = temp->next;
	}
	return (i);
}

void		push_small(t_stack **stacka, t_stack **stackb, int pos)
{
	int		len;

	len = stack_size(*stacka);
	if (pos > len / 2)
	{
		pos = len - pos;
		while (pos-- != 0)
			rra(stacka, 0);
	}
	else if (pos <= len / 2)
	{
		while (pos-- != 0)
			ra(stacka, 0);
	}
	pb(stackb, stacka);
}



void 		sort_2(t_stack **stack_a)
{
	if((*stack_a)->data > (*stack_a)->next->data)
		sa(stack_a);
}

void 		sort_3(t_stack **stack_a)
{
	int		num1;
	int		num2;
	int		num3;

	num1 = (*stack_a)->data;
	num2 = (*stack_a)->next->data;
	num3 = (*stack_a)->next->next->data;
	if (num1 > num2 && num1 > num3 && num2 > num3) // 3 2 1
	{
		sa(stack_a);
		rra(stack_a, 0);
	}
	else if (num2 > num1 && num2 > num3 && num3 > num1) // 1 3 2
	{
		sa(stack_a);
		ra(stack_a, 0);
	}
	else if (num1 > num2 && num1 < num3 && num3 > num2) // 2 1 3
		sa(stack_a);
	else if (num1 > num3 && num3 > num2 && num1 > num2) // 3 1 2
		ra(stack_a,0);
	else if (num3 < num1 && num3 < num2 && num1 < num2) // 2 3 1
		rra(stack_a,0);
}

void		sort_5(t_stack **stacka, t_stack **stackb)
{
	int		i;
	int		pos;
	int		size;

	size = stack_size(*stacka);
	i = 0;
	while (i++ < (size - 3))
	{
		pos = small_pos(stacka, small_num(stacka));
		push_small(stacka, stackb, pos);
	}
	sort_3(stacka);
	while (i-- > 0)
		pa(stacka, stackb);
}

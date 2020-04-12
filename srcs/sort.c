#include "../includes/push_swap.h"

void 		sort_2(t_stack **stack_a)
{
	t_stack	*tmp;

	tmp = *stack_a;
	if(tmp->data > tmp->next->data)
		s(stack_a);
}

void 		sort_3(t_stack **stack_a)
{
	t_stack	*tmp;
	int		num1;
	int		num2;
	int		num3;

	tmp = *stack_a;
	while(is_sorted(tmp))
	{
		num1 = tmp->data;
		num2 = tmp->next->data;
		num3 = tmp->next->next->data;
		if(num2 == 2)
			rrx(&tmp);
		if(num3 == 1)
			rx(&tmp);
		if(num1 == 3)
			rrx(&tmp);
		else
			s(&tmp);
	}
}

#include "push_swap.h"

int			is_ordered(t_stack *a)
{
	t_stack	*temp;

	temp = a;
	while (temp && temp->next && temp->data < temp->next->data)
		temp = temp->next;
	if (temp && temp->next)
		return (0);
	return (1);
}

int				check_args(int argc, char **argv)
{
	int i;
	int j;
	char **temp;

	i = 1;
	while(i < argc)
	{
		j = -1;
		temp = ft_strsplit(argv[i++], ' ');
		while (temp[++j])
			if (!digit_arg(temp[j]) || ft_atol(temp[j]) > 2147483647 ||
				ft_atol(temp[j]) < -2147483648)
				return (-1);
		free_arg(temp);
	}
	return (0);
}

int		check_dup(t_stack *stack_a)
{
	t_stack	*head;

	while(stack_a)
	{
		head = stack_a->next;
		while (head)
		{
			if (stack_a->data != head->data)
				head = head->next;
			else
				return (-1);
		}
		stack_a = stack_a->next;
	}
	return (0);
}

int				main(int argc, char **argv)
{
	t_stack		*stack_a;
	t_stack		*stack_b;

	stack_a = init_stack(argv);
	stack_b = NULL;
	if (argc == 1 || check_args(argc, argv) || check_dup(stack_a))
		ft_putendl("Error");
	else
	{
		if (is_ordered(stack_a) && !stack_b)
			printf("OK\n");
		else
			printf("KO\n");
		while(stack_a)
		{
			printf("%d ", stack_a->data);
			stack_a = stack_a->next;
		}
	}
	return (0);
}
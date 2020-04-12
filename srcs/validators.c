#include "../includes/push_swap.h"

int			digit_arg(char *str)
{
	int		i;

	i = 0;
	if (str[i] == '-')
		i++;
	else if (!isdigit(str[i]))
		return (0);
	while (str[i])
	{
		if (!isdigit(str[i]))
			return (0);
		i++;
	}
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

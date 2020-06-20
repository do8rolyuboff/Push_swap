#include "../includes/push_swap.h"

t_stack		*add_head(int num)
{
	t_stack	*head;

	if (!(head = (t_stack *)malloc(sizeof(*head))))
		return (NULL);
	head->prev = NULL;
	head->rank = -1;
	head->data = num;
	head->next = NULL;
	return (head);
}

void		add_tail(t_stack **list, t_stack *tail)
{
	t_stack	*tmp;

	if (!list || !tail)
		return ;
	tmp = *list;
	if (tmp)
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = tail;
		tail->prev = tmp;
	}
}

t_stack		*init_stack(char **argv)
{
	int		i;
	int		j;
	char	**str;
	t_stack	*head;

	i = 1;
	head = NULL;
	while (argv[i])
	{
		j = 0;
		str = ft_strsplit(argv[i++], ' ');
		while (str[j])
		{
			if (head == NULL)
				head = add_head(ft_atol(str[j++]));
			else
				add_tail(&head, add_head(ft_atol(str[j++])));
		}
		free_arg(str);
	}
	return (head);
}

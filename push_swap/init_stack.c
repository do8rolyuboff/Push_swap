#include "push_swap.h"

t_stack		*add_nodes(int num)
{
	t_stack	*new;

	if (!(new = (t_stack *)malloc(sizeof(*new))))
		return (NULL);
	new->prev = NULL;
	new->data = num;
	new->next = NULL;
	return (new);
}

void		tail_add(t_stack **list, t_stack *node)
{
	t_stack	*temp;

	if (!list || !node)
		return ;
	temp = *list;
	if (temp)
	{
		while (temp->next)
			temp = temp->next;
		temp->next = node;
		node->prev = temp;
	}
}

t_stack		*init_stack(char **argv)
{
	int		i;
	int		j;
	char	**cur;
	t_stack	*head;

	i = 1;
	head = NULL;
	while (argv[i])
	{
		j = 0;
		cur = ft_strsplit(argv[i++], ' ');
		while (cur[j])
		{
			if (head == NULL)
				head = add_nodes(ft_atol(cur[j++]));
			else
				tail_add(&head, add_nodes(ft_atol(cur[j++])));
		}
		free_arg(cur);
	}
	return (head);
}
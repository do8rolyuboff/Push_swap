#include "../includes/push_swap.h"

void		free_arg(char **str)
{
	int		i;

	i = 0;
	while (str[i])
		ft_strdel(&str[i++]);
	free(str);
}
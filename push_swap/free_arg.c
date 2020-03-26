#include "push_swap.h"

void		free_arg(char **dirs)
{
	int		i;

	i = 0;
	while (dirs[i])
		ft_strdel(&dirs[i++]);
	free(dirs);
}
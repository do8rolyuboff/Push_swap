#include "push_swap.h"

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
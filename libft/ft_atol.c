#include "libft.h"

long		ft_atol(char *str)
{
	long	ret;
	long	neg;
	int		i;

	ret = 0;
	neg = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		   str[i] == '\f' || str[i] == '\v' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (str[i] && isdigit(str[i]))
	{
		ret *= 10;
		ret += str[i] - 48;
		i++;
	}
	return (ret * neg);
}

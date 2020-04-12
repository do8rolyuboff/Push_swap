#include "libft.h"

void	ft_putendl(char const *s)
{
	int len;

	len = 0;
	while(s[len])
		len++;
	write(1, s, len);
	write(1, "\n", 1);
}

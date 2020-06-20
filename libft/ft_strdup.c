#include "libft.h"

char		*ft_strdup(const char *s1)
{
	int		i;
	int		len;
	char	*dup;

	len = ft_strlen(s1);
	if (!(dup = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	while (i < len)
	{
		dup[i] = s1[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

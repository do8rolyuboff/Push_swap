#include "push_swap.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *chr;

	if (len == 0)
		return (b);
	chr = (unsigned char *)b;
	while (len)
	{
		*chr = (unsigned char)c;
		len--;
		chr++;
	}
	return (b);
}

char			*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char		*str;
	size_t		i;

	if (!s)
		return (NULL);
	str = ft_strnew(len);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int		ft_word_len(char const *str, char c)
{
	int i;
	int temp;

	i = 0;
	temp = 0;
	while (*str)
	{
		if (temp == 1 && *str == c)
			temp = 0;
		if (temp == 0 && *str != c)
		{
			temp = 1;
			i++;
		}
		str++;
	}
	return (i);
}

char		**ft_strsplit(char const *str, char splitter)
{
	int 		i;
	int			j;
	int			len;
	int 		start;
	char		**ret;

	if ((str == NULL) || (splitter == 0))
		return (NULL);
	len = ft_word_len(str, splitter);
	if (!(ret = malloc((sizeof(char *)) * (len + 1))))
		return (NULL);
	i = 0;
	j = -1;
	while (++j < len)
	{
		while (str[i] && str[i] == splitter)
			i++;
		start = i;
		while (str[i] && str[i] != splitter)
			i++;
		ret[j] = ft_strsub(str, start, i - start);
		i++;
	}
	ret[j] = NULL;
	return (ret);
}

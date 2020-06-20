#include "libft.h"

static size_t	find_n(char **str, const int fd)
{
	size_t	i;

	i = 0;
	while (str[fd][i] != '\n' && str[fd][i] != '\0')
		i++;
	return (i);
}

static int		newline(const int fd, char **line, int ret, char **str)
{
	char	*extra;
	size_t	i;

	i = find_n(str, fd);
	if (str[fd][i] == '\n')
	{
		*line = ft_strsub(str[fd], 0, i);
		extra = ft_strdup(str[fd] + 1 + i);
		free(str[fd]);
		str[fd] = extra;
		if (str[fd][0] == '\0')
			ft_strdel(&str[fd]);
	}
	else if (str[fd][i] == '\0')
	{
		if (ret == BUFF_SIZE)
			return (get_next_line(fd, line));
		*line = ft_strdup(str[fd]);
		ft_strdel(&str[fd]);
	}
	return (1);
}

static int		result(int ret, char **str, const int fd, char **line)
{
	if (ret < 0)
		return (-1);
	else if (ret == 0 && (str[fd] == NULL || str[fd] == '\0'))
		return (0);
	return (newline(fd, line, ret, str));
}

int				get_next_line(const int fd, char **line)
{
	int			ret;
	char		buffer[BUFF_SIZE + 1];
	static char *str[99];
	char		*tmp;

	if (fd < 0 || line == NULL || read(fd, buffer, 0))
		return (-1);
	while ((ret = read(fd, buffer, BUFF_SIZE)))
	{
		if (str[fd] == NULL)
			str[fd] = ft_strdup("");
		buffer[ret] = '\0';
		tmp = ft_strjoin(str[fd], buffer);
		free(str[fd]);
		str[fd] = tmp;
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	return (result(ret, str, fd, line));
}

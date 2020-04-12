#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

# define BUFF_SIZE 35

typedef struct			s_arr
{
	int					fd;
	char				*rest;
	struct s_arr		*next;
}						t_arr;

long					ft_atol(char *str);

int						isdigit(int c);
int						get_next_line(const int fd, char **line);
int						ft_strequ(char const *s1, char const *s2);
int						ft_strcmp(const char *str1, const char *str2);

char					*ft_strnew(size_t size);
char					*ft_strchr(const char *s, int c);
char					*ft_strcat(char *dst, const char *app);
char					*ft_strcpy(char *dst, const char *src);
char					*ft_strjoin(char const *s1, char const *s2);
char					**ft_strsplit(char const *str, char splitter);
char					*ft_strsub(char const *s, unsigned int start, size_t len);

void					ft_strclr(char *s);
void					ft_strdel(char **as);
void					ft_putendl(char const *s);
void					*ft_memset(void *b, int c, size_t len);

size_t					ft_strlen(const char *str);

#endif

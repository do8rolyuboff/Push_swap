#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

# define BUFF_SIZE 35

# define RESET "\033[00m"
# define GREEN "\033[32m"
# define BLUE "\033[34m"
# define WHITE "\033[37m"
# define RED "\033[31m"
# define YELLOW "\033[33m"
# define CYAN "\033[36m"

typedef struct			s_arr
{
	int					fd;
	char				*rest;
	struct s_arr		*next;
}						t_arr;

int						ft_isdigit(int c);
long int				ft_atol(const char *str);
int						get_next_line(const int fd, char **line);
int						ft_strequ(char const *s1, char const *s2);
int						ft_strcmp(const char *str1, const char *str2);

char					*ft_strnew(size_t size);
char					*ft_strdup(const char *s1);
char					*ft_strchr(const char *s, int c);
char					*ft_strcat(char *dst, const char *app);
char					*ft_strcpy(char *dst, const char *src);
char					*ft_strjoin(char const *s1, char const *s2);
char					**ft_strsplit(char const *str, char splitter);
char					*ft_strsub(char const *s, unsigned int start,
						size_t len);

void					ft_strclr(char *s);
void					ft_strdel(char **as);
void					ft_putendl(char const *s);
void					ft_putchar_fd(char c, int fd);
void					ft_putstr_fd(char const *s, int fd);
void					ft_putendl_fd(char const *s, int fd);
void					*ft_memset(void *b, int c, size_t len);
void					ft_putendl_col_fd(char *colour, char *str, int fd);

size_t					ft_strlen(const char *str);

#endif

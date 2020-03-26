#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct			s_stack
{
	int 				data;
	struct s_stack		*next;
	struct s_stack		*prev;
}						t_stack;

int						isdigit(int c);
long					ft_atol(char *str);
char					**ft_strsplit(char const *str, char splitter);
int						digit_arg(char *arg);
void					free_arg(char **dirs);
void					ft_strdel(char **as);
void					ft_putendl(char const *s);

t_stack		*init_stack(char **av);

#endif
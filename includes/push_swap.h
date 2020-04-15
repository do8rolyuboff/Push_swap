#ifndef					PUSH_SWAP_H
# define 				PUSH_SWAP_H
# include 				<stdlib.h>
# include				<unistd.h>
# include				<stdio.h>
# include                "../libft/libft.h"

typedef struct			s_lazy
{
	int					min;
	int					space;
}						t_lazy;

typedef struct			s_stack
{
	int 				data;
	int					norm;
	struct s_stack		*next;
	struct s_stack		*prev;
}						t_stack;

t_stack				*init_stack(char **av);
int					check_args(int argc, char **argv);
int					check_dup(t_stack *stack_a);


/**/
void		free_arg(char **str);
t_stack		*add_head(int num);
void		tail_add(t_stack **list, t_stack *tail);
int			digit_arg(char *str);
int			is_sorted(t_stack *a);

void 	operations(t_stack **stack_a, t_stack **stack_b);
void 	sa(t_stack **stack_a);
void 	sb(t_stack **stack_b);
void 	ss(t_stack **stack_a, t_stack **stack_b);
void		pa(t_stack **stack_a, t_stack **stack_b);
void		pb(t_stack **stack_b, t_stack **stack_a);
void        ra(t_stack **stack_a, int p);
void        rb(t_stack **stack_b, int p);
void        rr(t_stack **stack_a, t_stack **stack_b);
void	rra(t_stack **stack_a, int p);
void	rrb(t_stack **stack_b, int p);
void	rrr(t_stack **stack_a, t_stack **stack_b);

int		stack_size(t_stack *head);
void 		sort_2(t_stack **stack_a);
void 		sort_3(t_stack **stack_a);
void		sort_5(t_stack **stack_a, t_stack **stack_b);
void		sort_all(t_stack **stack_a, t_stack **stack_b);
int		ft_max(t_stack *stack_a);
int		ft_min(t_stack *stack_a);
void	ra_or_rra(t_stack **stack_a, int pos);


#endif

#ifndef					PUSH_SWAP_H
# define 				PUSH_SWAP_H
# include 				<stdlib.h>
# include				<unistd.h>
# include				<stdio.h>
# include                "../libft/libft.h"

typedef struct			s_stack
{
	int 				data;
	int					rank;
	struct s_stack		*next;
	struct s_stack		*prev;
}						t_stack;

t_stack					*add_head(int num);
t_stack					*init_stack(char **av);

int						digit_arg(char *str);
int						is_sorted(t_stack *a);
int						stack_size(t_stack *head);
int						check_dup(t_stack *stack_a);
int						check_args(int argc, char **argv);

void					free_arg(char **str);
void				 	sa(t_stack **stack_a);
void 					sb(t_stack **stack_b);
void 					sort_2(t_stack **stack_a);
void 					sort_3(t_stack **stack_a);
void 					ra(t_stack **stack_a, int p);
void					rb(t_stack **stack_b, int p);
void					rra(t_stack **stack_a, int p);
void					rrb(t_stack **stack_b, int p);
void					ra_or_rra(t_stack **stack_a, int pos);
void					rb_or_rrb(t_stack **stack_b, int pos);
void					tail_add(t_stack **list, t_stack *tail);
void 					ss(t_stack **stack_a, t_stack **stack_b);
void					pa(t_stack **stack_a, t_stack **stack_b);
void					pb(t_stack **stack_b, t_stack **stack_a);
void					rr(t_stack **stack_a, t_stack **stack_b);
void					rrr(t_stack **stack_a, t_stack **stack_b);
void					sort_5(t_stack **stack_a, t_stack **stack_b);
void 					operations(t_stack **stack_a, t_stack **stack_b);
void					free_stacks(t_stack **stack_a, t_stack **stack_b);
void					sort_stack(t_stack **stack_a, t_stack **stack_b, int num);

#endif

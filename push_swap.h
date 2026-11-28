#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_stack
{
	int				value;
	struct s_stack	*next;
}	t_stack;

void	swap(t_stack **top);
void	swap_swap(t_stack **stack_a, t_stack **stack_b);
void	swap_a(t_stack **stack_a);
void	swap_b(t_stack **stack_b);

void	push(t_stack **stack, t_stack *node);
void	push_b(t_stack **stack_a, t_stack **stack_b);
void	push_a(t_stack **stack_a, t_stack **stack_b);

void	rotate(t_stack **stack);
void	rotate_a(t_stack **stack_a);
void	rotate_b(t_stack **stack_b);
void	rotate_rotate(t_stack **stack_a, t_stack **stack_b);

void	reverse_rotate(t_stack **stack);
void	reverse_rotate_a(t_stack **stack_a);
void	reverse_rotate_b(t_stack **stack_b);
void	reverse_rotate_rotate(t_stack **stack_a, t_stack **stack_b);

double	compute_disorder(t_stack *stack);

#endif

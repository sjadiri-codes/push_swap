#include "push_swap.h"

void	rotate(t_stack **stack)
{
	t_stack	*top;
	t_stack	*tmp;

	if (stack && *stack && (*stack)->next)
	{
		top = *stack;
		*stack = (*stack)->next;
		tmp = *stack;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = top;
		top->next = NULL;
	}
}

void	rotate_a(t_stack **stack_a)
{
	rotate(stack_a);
}

void	rotate_b(t_stack **stack_b)
{
	rotate(stack_b);
}

void	rotate_rotate(t_stack **stack_a, t_stack **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
}

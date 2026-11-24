#include "operations.h"

void	reverse_rotate(t_stack **stack)
{
	t_stack	*last;
	t_stack	*prev_last;

	if (stack && *stack && (*stack)->next)
	{
		last = *stack;
		while (last->next)
		{
			prev_last = last;
			last = last->next;
		}
		prev_last->next = NULL;
		last->next = *stack;
		*stack = last;
	}
}

void	reverse_rotate_rotate(t_stack **stack_a, t_stack **stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
}

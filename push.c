#include "operations.h"

void	push(t_stack **stack, t_stack *node)
{
	if (!stack || !node)
		return ;
	node->next = *stack;
	*stack = node;
}

void	push_a(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*top_b;

	if (*stack_a && *stack_b)
	{
		top_b = *stack_b;
		*stack_b = (*stack_b)->next;
		push(stack_a, top_b);
	}
}

void	push_b(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*top_a;

	if (*stack_a && *stack_b)
	{
		top_a = *stack_a;
		*stack_a = (*stack_a)->next;
		push(stack_b, top_a);
	}
}

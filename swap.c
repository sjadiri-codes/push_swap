#include "push_swap.h"

void	swap(t_stack **top)
{
	t_stack	*tmp;

	if (top && *top && (*top)->next)
	{
		tmp = *top;
		*top = (*top)->next;
		tmp->next = (*top)->next;
		(*top)->next = tmp;
	}
}

void	swap_a(t_stack **stack_a)
{
	swap(stack_a);
}

void	swap_b(t_stack **stack_b)
{
	swap(stack_b);
}

void	swap_swap(t_stack **stack_a, t_stack **stack_b)
{
	swap_a(stack_a);
	swap_b(stack_b);
}

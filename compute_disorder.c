#include "push_swap.h"

double	compute_disorder(t_stack *stack)
{
	t_stack	*after;
	double	total_pairs;
	double	mistakes;

	mistakes = 0;
	total_pairs = 0;
	if (!stack)
		return (0);
	while (stack->next)
	{
		after = stack->next;
		while (after)
		{
			if (stack->value > after->value)
				mistakes++;
			total_pairs++;
			after = after->next;
		}
		stack = stack->next;
	}
	return (mistakes / total_pairs);
}

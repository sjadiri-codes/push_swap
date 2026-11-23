#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct s_stack
{
	int	value;
	struct s_stack *next;
}		t_stack;

t_stack	*init_stack(int value)
{
	t_stack	*stack = malloc(sizeof(t_stack));

	stack->value = value;
	stack->next = NULL;

	return (stack);
}

void	push(t_stack **top, int value)
{
	t_stack	*node = malloc(sizeof(t_stack));

	node->next = *top;
	node->value = value;
	*top = node;
}

void	pop(t_stack **top)
{
	t_stack	*tmp;

	if (!top || !*top)
		return ;
	tmp = *top;
	*top = (*top)->next;
	free(tmp);
}

int	peek(t_stack *top)
{
	if (top)
		return (top->value);
	return (0);
}

void	print_stack(t_stack *stack)
{
	while (stack)
	{
		printf("%d\n", stack->value);
		stack = stack->next;
	}
}

size_t	get_stack_size(t_stack *stack)
{
	size_t	size;

	size = 0;
	while (stack)
	{
		size++;
		stack = stack->next;
	}
	return (size);
}

void	free_stack(t_stack *top)
{
	t_stack	*tmp;

	if (!top)
		return ;
	while (top)
	{
		tmp = top;
		top = top->next;
		free(tmp);
	}
}

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

int main()
{
	t_stack	*top;

	top = init_stack(10);

	push(&top, 20);
	push(&top, 30);
	push(&top, 40);

	print_stack(top);

	swap(&top);

	printf("After swapping the first two nodes:\n");
	print_stack(top);

	return (0);
}

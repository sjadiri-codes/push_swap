#include <stdio.h>
#include "push_swap.h"

t_stack	*init_stack(int value)
{
	t_stack	*stack = malloc(sizeof(t_stack));

	stack->value = value;
	stack->next = NULL;

	return (stack);
}

void	push_value(t_stack **top, int value)
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

void	swap_two_first_elements(t_stack **top)
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

t_stack	*lstnew(int value)
{
	t_stack	*node = malloc(sizeof(t_stack));
	
	node->value = value;
	node->next = NULL;
	return (node);
}

int main()
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = init_stack(40);

	push(&stack_a, lstnew(100));
	push(&stack_a, lstnew(30));
	push(&stack_a, lstnew(20));
	push(&stack_a, lstnew(10));

	printf("Stack a:\n");
	print_stack(stack_a);

	double disorder = compute_disorder(stack_a);
	printf("\nDisorder is: %.2f\n", disorder * 100);


	// initialise stack b
	/*stack_b = init_stack(100);

	push(&stack_b, lstnew(200));
	push(&stack_b, lstnew(300));
	push(&stack_b, lstnew(400));

	printf("\nStack b:\n");
	print_stack(stack_b);*/


	/*
	// push a operation
	push_a(&stack_a, &stack_b);

	printf("\nStacks after pa operation:\n");
	printf("Stack a:\n");
	print_stack(stack_a);
	printf("Stack b:\n");
	print_stack(stack_b);

	// rotate a operation
	rotate(&stack_a);
	printf("\nStacks after ra operation:\n");
	printf("Stack a:\n");
	print_stack(stack_a);
	printf("Stack b:\n");
	print_stack(stack_b);

	// rotate b operation
	rotate(&stack_b);
	printf("\nStacks after rb operation:\n");
	printf("Stack a:\n");
	print_stack(stack_a);
	printf("Stack b:\n");
	print_stack(stack_b);
	
	// rotate rotate operation
	rotate_rotate(&stack_a, &stack_b);
	printf("\nStacks after rr operation:\n");
	printf("Stack a:\n");
	print_stack(stack_a);
	printf("\nStack b:\n");
	print_stack(stack_b);
	
	// rra operation
	reverse_rotate(&stack_a);
	printf("\nStacks after rra operation:\n");
	printf("Stack a:\n");
	print_stack(stack_a);
	printf("\nStack b:\n");
	print_stack(stack_b);
	*/

	//free_stack(stack_a);
	//free_stack(stack_b);
	return (0);
}

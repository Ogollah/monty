#include "monty.h"

/**
 * sub - Subtract the top two elements of the stack.
 * @stack: Pointer to stack.
 * @line_number: Number line.
 */
void sub(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n",
			line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->next->n > (*stack)->n)
		(*stack)->next->n -= (*stack)->n;
	else
		(*stack)->n -= (*stack)->next->n;

	temp = *stack;
	free_temp_mem(temp, stack);
}

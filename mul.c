#include "monty.h"
/**
 * mul - Mult top two elements of the stack.
 * @stack: Pointer to stack.
 * @line_number: Line number.
 */
void mul(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n",
			line_number);
		exit(EXIT_FAILURE);
	}

	(*stack)->next->n *= (*stack)->n;

	temp = *stack;
	free_temp_mem(temp, stack);
}

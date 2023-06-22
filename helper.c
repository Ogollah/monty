#include "monty.h"

/**
 * free_temp_mem - Free memory.
 * @temp: - Pointer to temp stack.
 * @stack: Pointer to stack.
 */
void free_temp_mem(stack_t *temp, stack_t **stack)
{
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	free(temp);
}

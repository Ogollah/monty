#include "monty.h"

int stack_mode = 1;
int queue_mode = 0;

/**
 * stack - Implements stack.
 * @stack: Pointer to stack.
 * @line_number: Number line.
 */
void stack(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	stack_mode = 1;
	queue_mode = 0;
}

/**
 * queue - Implements queue.
 * @stack: Pointer to stack.
 * @line_number: Number line.
 */
void queue(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	stack_mode = 0;
	queue_mode = 1;
}

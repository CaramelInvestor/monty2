#include "monty.h"
/**
 * pall_handler - function to print all the elements
 * currently present in the stack.
 * @stack: A pointer to a pointer to the top of the stack
 * @line_number: line number variable
 */
void pall_handler(stack_t **stack, unsigned int line_number)
{
	const stack_t *h = info.head2;

	(void)stack;
	(void)line_number;
	print_stack(&h, line_number);
}

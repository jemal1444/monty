#include "monty.h"

/**
 *Description: The opcode stack sets the format of the data to a stack (LIFO). This is the default behavior of the program.
 * @stack: double pointer to the beginning of the stack
 * @line_number: script line number
 *
 * Return: void
 */
void m_stack(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	var.queue = STACK;
}

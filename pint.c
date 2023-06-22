#include "monty.h"

/**
 * Description:The opcode pint prints the value at the top of the stack, followed by a new line.
 * If the stack is empty, print the error message
 * @stack: double pointer to head of stack
  * Return: void
 */
void m_pint(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack;

	if (var.stack_len == 0)
	{
		dprintf(STDOUT_FILENO,
			"L%u: can't pint, stack empty\n",
			line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", head->n);
}

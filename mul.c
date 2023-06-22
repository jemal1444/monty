#include "monty.h"

/**
 * Description:The opcode mul multiplies the second top element of the stack with the top element of the stack
 * If the stack contains less than two elements, print the error message
 * The result is stored in the second top element of the stack, and the top element is removed
 * @stack: double pointer to head of stack
 * @line_number: line number of current operation
 *
 * Return: void
 */
void m_mul(stack_t **stack, unsigned int line_number)
{
	int n;

	if (var.stack_len < 2)
	{
		dprintf(STDOUT_FILENO,
			"L%u: can't mul, stack too short\n",
			line_number);
		exit(EXIT_FAILURE);
	}
	n = (*stack)->n;
	m_pop(stack, line_number);
	(*stack)->n *= n;
}

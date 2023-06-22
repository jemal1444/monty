#include "monty.h"

/**
 * Description: The opcode pop removes the top element of the stack.
 * If the stack is empty, print the error message
 * @stack: double pointer to head of stack
 * @line_number: line number of current operation
 * * Return: void
 */
void m_pop(stack_t **stack, unsigned int line_number)
{
	stack_t *pop = *stack;

	if (var.stack_len == 0)
	{
		dprintf(STDOUT_FILENO,
			"L%u: can't pop an empty stack\n",
			line_number);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->prev = (*stack)->prev;
	(*stack)->prev->next = (*stack)->next;
	if (var.stack_len != 1)
		*stack = (*stack)->next;
	else
		*stack = NULL;
	free(pop);
	var.stack_len--;
}

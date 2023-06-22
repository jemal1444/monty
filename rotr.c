#include "monty.h"

/**
 * Description: The opcode rotr rotates the stack to the bottom.
 * The last element of the stack becomes the top element of the stack
 * @stack: double pointer to the begining of the linked list
 * @line_number: script line number
 *
 * Return: void
 */
void rotr(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	if (*stack)
		*stack = (*stack)->prev;
}

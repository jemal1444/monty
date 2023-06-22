#include "monty.h"
/**
 * Description: The opcode pall prints all the values on the stack, starting from the top of the stack.
 * If the stack is empty, don’t print anything
 * @head: stack head
 * @counter: no used
 * Return: no return
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}

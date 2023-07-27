#include "monty.h"
void free_list(stack_t *head);
/**
 * free_list - ==========
 * @head: ===========
 * Return: int
 */
void free_list(stack_t *head)
{
	stack_t *curr = info.head2;
	stack_t *temp = NULL;
	(void)head;

	while (curr)
	{
		temp = curr;
		curr = curr->next;
		free(temp);
	}
	info.head2 = NULL;
}

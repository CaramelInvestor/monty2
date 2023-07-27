#include "monty.h"
void addnodefront(stack_t **head, const int n);
stack_t *addnodetoend(stack_t **head, const int n);

/**
 * addnodefront - function to add node to the front of the list
 * @head: first item in the list
 * @n: n is the value
 * Return: list
 */
void addnodefront(stack_t **head, const int n)
{
	stack_t *curr;
	stack_t *new = NULL;

	*head = info.head2;
	curr = *head;
	new = (stack_t *) malloc(sizeof(stack_t));
	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (curr)
		curr->prev = new;

	new->next = curr;
	new->prev = NULL;
	*head = new;
	info.head2 = new;
}

/**
 * addnodetoend - function to add node to the end , FIFO queue
 * @head: the first item in the list
 * @n: value
 * Return: stack
 */
stack_t *addnodetoend(stack_t **head, const int n)
{
	stack_t *curr;
	stack_t *temp;
	stack_t *new = NULL;

	*head = info.head2;
	curr = info.head2;
	new = (stack_t *) malloc(sizeof(stack_t));
	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (curr == NULL)
	{
		*head = new;
		info.head2 = *head;
		return (*head);
	}
	while (curr != NULL)
	{
		temp = curr;
		curr = curr->next;
	}
	new->prev = temp;
	temp->next = new;
	return (new);
}

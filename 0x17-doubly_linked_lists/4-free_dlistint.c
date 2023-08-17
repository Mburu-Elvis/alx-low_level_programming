#include "lists.h"

/**
 * free_dlistint - function that frees a doubly linked list
 * @head: the first node of the list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (head->next != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	free(head);
}

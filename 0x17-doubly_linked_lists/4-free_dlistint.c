#include "lists.h"

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

#include "lists.h"

/**
 * free_list - function that frees a list_t list
 * @head: the header of the list
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
		return;
	temp = head;
	while (temp->next != NULL)
	{
		free(head);
		head = temp->next;
		free(temp);
		temp = head;
	}
	free(head);
	free(temp);
}

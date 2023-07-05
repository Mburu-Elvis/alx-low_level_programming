#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: head pointer to the list to free
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = *head;

	while (temp != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	free(temp);
	*head = NULL;
}

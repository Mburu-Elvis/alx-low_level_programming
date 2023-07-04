#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: head pointer to the list to free
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head != NULL)
	{
		temp = *head;
		while (temp->next != NULL)
		{
			*head = temp->next;
			free(temp);
			temp = *head;
		}
		free(temp);
		*head = NULL;
	}
}

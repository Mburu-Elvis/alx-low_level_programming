#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 * @head: the head pointer of the list to free
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head != NULL)
	{
		temp = head;
		while (temp->next != NULL)
		{
			head = temp->next;
			free(temp);
			temp = head;
		}
		free(temp);
	}
}

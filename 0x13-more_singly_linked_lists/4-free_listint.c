#include "lists.h"

/**
* free_listint - function that frees a listint_t list
* @head: the first element in a list
*
* Return: None
*/
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

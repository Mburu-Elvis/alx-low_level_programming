#include "lists.h"

/**
* free_listint2 -  function that frees a listint_t list
* @head: the first element of the list
*
* Return: None
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (temp != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}

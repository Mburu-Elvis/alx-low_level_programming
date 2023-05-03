#include "lists.h"

/**
* reverse_listint - function that reverses a string
* @head: the first node of the list
*
* Return: pointer to the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *current, *next;

	current = *head;
	prev = NULL;
	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
	return (*head);
}

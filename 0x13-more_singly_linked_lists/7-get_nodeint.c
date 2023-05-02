#include "lists.h"

/**
* get_nodeint_at_index - function that returns the nth node of a listint-t list
* @head: the first element
* @index: the index of the element to get
*
* Return: the address of the element fetched
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (i < index)
	{
		head = head->next;
		i++;
	}
	return (head);
}

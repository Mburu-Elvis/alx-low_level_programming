#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - frees a listint_t linked list.
 * @h: pointer to the beginning of the linked list.
 *
 * Return: the size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *curr = *h, *temp;

	while (curr != NULL)
	{
		count++;
		temp = curr;
		curr = curr->next;
		free(temp);
		if (temp <= curr)
			break;
	}
	*h = NULL;
	return (count);
}

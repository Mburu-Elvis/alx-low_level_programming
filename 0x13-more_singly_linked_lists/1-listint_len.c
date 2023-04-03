#include "lists.h"

/**
 * listint_len - determining the the number of elements in a list
 * @h: the header to the list being evaluated
 *
 * Description: determining the number of nodes in a list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	if (h != NULL)
	{
		while (h->next != NULL)
		{
			h = h->next;
			len++;
		}
		if (h->next == NULL)
			len++;
	}
	return (len);
}

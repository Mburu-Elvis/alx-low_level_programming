#include "lists.h"

/**
 * dlistint_len - find the number of elements in a list
 * @h: pointer to the first node of the list
 *
 * Return: number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elems = 0;

	if (h != NULL)
	{
		while (h != NULL)
		{
			h = h->next;
			elems++;
		}
	}
	return (elems);
}

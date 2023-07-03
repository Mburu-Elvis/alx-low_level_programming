#include "lists.h"

/**
 * listint_len - function that returns the number of elements in the list
 * @h: the list to find the number of elements
 *
 * Return: the number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t elem = 0;

	if (h != NULL)
	{
		while (h->next != NULL)
		{
			h = h->next;
			elem++;
		}
		elem++;
	}
	return (elem);
}

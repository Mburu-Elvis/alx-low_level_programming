#include "lists.h"

/**
 * list_len - returns the number of elements in a list
 * @h: a list
 *
 * Description: return the number of elements in a list h
 * Return: length of the list
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}

#include "lists.h"

/**
* list_len -  a function that return the number of elements in a list_t list
* @h: a linked list of type list_t
*
* Return: number of elements
*/
size_t list_len(const list_t *h)
{
	size_t elem = 0;

	while (h != NULL)
	{
		elem += 1;
		h = h->next;
	}
	return (elem);
}

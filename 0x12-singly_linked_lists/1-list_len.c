#include "lists.h"
#include <stdio.h>

/**
 * list_len - function that returns the number of elements in a list
 * @h: the list to evaluate
 *
 * Return: the number of elements in the list h
 */
size_t list_len(const list_t *h)
{
	size_t elem = 0;

	while (h != NULL)
	{
		elem++;
		h = h->next;
	}
	return (elem);
}

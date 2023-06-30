#include "lists.h"
#include <stdio.h>

/**
 * print_list - function that prints all elements of a list_t list
 * @h: list whose elements are to be printed
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t elem = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		elem++;
	}
	return (elem);
}

#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all the elements of the d_listint_t list
 * @h: points to the first node of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t elems = 0;

	if (h != NULL)
	{
		while (h != NULL)
		{
			printf("%d\n", h->n);
			h = h->next;
			elems++;
		}
	}
	return (elems);
}

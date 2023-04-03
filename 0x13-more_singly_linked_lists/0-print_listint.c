#include "lists.h"

/**
 * print_listint - print a list of integers
 * @h: the list to print
 *
 * Description: print list elements
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h != NULL)
	{
		while (h->next != NULL)
		{
			printf("%d\n", h->n);
			h = h->next;
			count++;
		}
		if (h->next == NULL)
		{
			printf("%d\n", h->n);
			count++;
		}
	}
	return (count);
}

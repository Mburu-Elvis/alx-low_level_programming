#include "lists.h"

/**
 * prist_listint - function that prints all the elements of a listint_t list
 * @h: list whose elements are to be printed
 *
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int elem = 0;

	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		elem++;
	}
	printf("%d\n", h->n);
	elem++;
	return (elem);
}

#include "lists.h"

/**
* print_listint - function printing all elements of a listint_t list
* @h: the list whose elements are to be printed
*
* Return: the number on nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}

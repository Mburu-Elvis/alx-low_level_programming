#include "lists.h"

/**
* listint_len - funtion determing the number of elements in a list
* @h: the list to be evaluated
*
* Return: The number of elements in a list
*/
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}

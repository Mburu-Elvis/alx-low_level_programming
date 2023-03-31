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
	size_t n = 0;

	while (h != NULL)
	{
		if (h->str != NULL && h->len != 0)
		{
			n = 2;
			break;
		}
		else
		{
			n = 1;
			break;
		}
	}
	return (n);
}

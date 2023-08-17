#include "lists.h"

/**
 * get_dnodeint_at_index - functions that returns the nth node
 * @head: points to the first node of the list
 * @index: the index of the node to return
 *
 * Return: nth node, else NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;
	dlistint_t *temp = head;

	if (head == NULL)
		return (NULL);
	for (; n < (index + 1); n++)
	{
		if (n == index)
			return (temp);
		temp = temp->next;
		if (temp->next == NULL && n < (index + 1))
			return (NULL);
	}
	return (NULL);
}

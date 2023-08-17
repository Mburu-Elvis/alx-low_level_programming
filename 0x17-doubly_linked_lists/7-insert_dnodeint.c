#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: points to the first node of the list
 * @idx: the index to add the new node
 * @n: the data element of the new node
 *
 * Return: index of the new node, else NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new_node = malloc(sizeof(dlistint_t)), *temp = *h, *x;

	if (new_node == NULL)
		return (NULL);
	while (i < idx)
	{
		if (temp->next == NULL && i < idx)
			return (NULL);
		if (i == (idx - 1))
		{
			x = temp->next;
			temp->next = new_node;
			new_node->prev = temp;
			new_node->next = x;
			new_node->n = n;
			return (new_node);
		}
		temp = temp->next;
		i++;
	}
	return (NULL);
}

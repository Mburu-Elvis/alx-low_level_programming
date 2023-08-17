#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at index index
 * @head: points to the first node of the list
 * @index: index of the node to delete
 *
 * Return: 1 if success, else -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int n = 0;
	dlistint_t *temp = *head, *prev, *next;

	if (*head == NULL)
		return (-1);
	while (n <= index)
	{
		if (temp->next == NULL && n != index)
			return (-1);
		if (n == index)
		{
			prev = temp->prev;
			next = temp->next;
			if (prev != NULL)
				prev->next = next;
			if (next != NULL)
				next->prev = prev;
			free(temp);
			return (1);
		}
		temp = temp->next;
		n++;
	}
	return (-1);
}

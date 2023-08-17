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
	dlistint_t *temp = *head, *holder;

	if (*head == NULL)
		return (-1);
	while (n <= index)
	{
		if ((*head)->next == NULL && n != index)
			return (-1);
		if (n == index)
		{
			holder = temp->next;
			holder->prev = temp->prev;
			holder->next = temp->next->next;
			temp = holder;
			return (1);
		}
		n++;
	}
	return (-1);
}

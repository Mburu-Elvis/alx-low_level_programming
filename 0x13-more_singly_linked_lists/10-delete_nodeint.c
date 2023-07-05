#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index index
 * @head: the list from which the node is to be deleted
 * @index: the index of the node to delete
 *
 * Return: 1 if success, -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *f_node;
	unsigned int elem = 0;

	if (*head != NULL)
	{
		temp = *head;
		while (temp != NULL)
		{
			if (index == 0)
			{
				temp = temp->next;
				free(*head);
				*head = temp;
				return (1);
			}
			if (temp->next == NULL)
			{
				return (-1);
			}
			if (elem < (index - 1) && temp->next != NULL)
			{
				temp = temp->next;
				elem++;
			}
			else if (elem == (index - 1))
			{
				f_node = temp->next->next;
				free(temp->next);
				temp->next = f_node;
				return (1);
			}
			else
				return (-1);
		}
	}
	return (-1);
}

#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at a position
 * @head: the head of the list
 * @idx: the index at which to insert the node
 * @n: the data element of the newly inserted node
 *
 * Return: address of teh new node, else NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *f_node, *new_node, *temp;
	unsigned int elem = 0;

	if (*head != NULL)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		new_node->next = NULL;
		temp = *head;
		while (temp->next != NULL)
		{
			if (elem < (idx - 1))
			{
				temp = temp->next;
				elem++;
			}
			if (elem == (idx - 1))
			{
				f_node = temp->next;
				temp->next = new_node;
				new_node->next = f_node;
				return (new_node);
			}
		}
		if (temp->next == NULL && elem > idx)
			return (NULL);
	}
	return (NULL);
}

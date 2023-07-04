#include "lists.h"

/**
 * get_nodeint_at_index -  functio that returns the nth node of the list
 * @head: the head pointer of the list
 * @index: the index of the node to return
 *
 * Return: pointer to the node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int elem = 0;

	while (head != NULL)
	{
		if (elem < index)
		{
			head = head->next;
			elem++;
		}
		else
			break;
	}
	return (head);
}

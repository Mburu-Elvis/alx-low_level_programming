#include "lists.h"

/**
 * pop_listint -  a function to delete the head node
 * @head: the head node
 *
 * Description: delete the head node of the list
 * Return: headnode data
 */
int pop_listint(listint_t **head)
{
	listint_t *tempNode = (*head)->next;
	int n;

	if (head == NULL)
		return (0);
	n = (*head)->n;
	if ((*head)->next == NULL)
		free(*head);
	else
	{
		free(*head);
		*head = tempNode;
	}
	return (n);
}

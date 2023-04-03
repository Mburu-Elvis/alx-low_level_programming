#include "lists.h"

/**
 * add_nodeint - adding a new node to a list
 * @head: pointer to the head of the node
 * @n: data of type int
 *
 * Description: add a node to a list
 * Return: pointer to the head of the list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		new->next = *head;
		*head = new;
	}
	return (*head);
}

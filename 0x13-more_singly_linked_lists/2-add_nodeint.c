#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning ogf a list
 * @head: the list to which we add a node
 * @n: the n element of the list
 *
 * Return: the address of the new element, else NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		new_node->next = *head;
		*head = new_node;
	}
	return (*head);
}

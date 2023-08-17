#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * @head: the head of the node
 * @n: element to add in the new node
 *
 * Return: address of the updated list head pointer
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		new_node->prev = NULL;
		new_node->next = *head;
		(*head)->prev = new_node;
		*head = new_node;
	}
	return (*head);
}

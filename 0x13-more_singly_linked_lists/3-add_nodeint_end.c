#include "lists.h"

/**
 * add_nodeint_end - function that adds a node at the end of the list
 * @head: pointer to the list to add the node to
 * @n: element n of the new node
 *
 * Return: pointer to the new node, else NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next; 
	temp->next = new_node;
	return (new_node);
}

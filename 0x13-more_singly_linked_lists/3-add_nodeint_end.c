#include "lists.h"

/**
* add_nodeint_end - funtion that adds a new node at the end of the list
* @head: the first element of the list
* @n: integer value for the new element
*
* Return: the address of the new element or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;

	if (head == NULL)
		return (NULL);
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}
	while ((*head)->next != NULL)
		*head = (*head)->next;
	(*head)->next = newNode;
	
	return (newNode);
}
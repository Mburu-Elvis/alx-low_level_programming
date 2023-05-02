#include "lists.h"

/**
* add_nodeint - function that adds a new node at the beginning of a list
* @head: pointer to the first element of the list
* @n: the value for integer value of the new node
*
* Return: the address of the new element or NULL if it failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	if (*head == NULL)
		*head = newNode;
	else
	{
		newNode->next = *head;
		*head = newNode;
	}
	return (*head);
}

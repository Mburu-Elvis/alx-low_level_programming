#include "lists.h"

/**
 * add_nodeint_end -  adding a new node from the end of the list
 * @head: pointer to the head node
 * @n: the int data for a node
 *
 * Description: Add a node from the end of the list
 * Return: address to the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *lastNode;

	newNode = malloc(sizeof(listint_t));
	lastNode = *head;
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}
	else
	{
		while (lastNode->next != NULL)
			*head = lastNode->next;
		if (lastNode->next == NULL)
		{
			lastNode->next = newNode;
		}
		return (lastNode);
	}
}

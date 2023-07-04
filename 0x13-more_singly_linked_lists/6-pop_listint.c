#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t list
 * @head: poiter to the list
 *
 * Return: nodes data, else 0
 */
int pop_listint(listint_t **head)
{
	int data;

	if (*head == NULL)
		return (0);
	data = (*head)->n;
	if ((*head)->next == NULL)
		*head = NULL;
	else
		*head = (*head)->next;
	return (data);
}

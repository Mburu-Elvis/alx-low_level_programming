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
	listint_t *temp;

	if (*head == NULL)
		return (0);
	data = (*head)->n;
	temp = *head;
	if (temp->next == NULL)
	{
		free(temp);
		*head = NULL;
	}
	else
	{
		temp = temp->next;
		free(*head);
		*head = temp;
	}
	return (data);
}

#include "lists.h"

/**
* pop_listint - function that deletes the head node of a listint_t list
* @head: the first element of the list
*
* Return: the head node's data (n)
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (head == NULL || *head == NULL)
		return (0);
	num = (*head)->n;
	if ((*head)->next != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	else
	{
		free(*head);
		*head = NULL;
	}
	return (num);
}

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
	if ((*head)->next != NULL)
	{
		num = (*head)->n;
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	else
	{
		num = (*head)->n;
		free(*head);
	}
	return (num);
}

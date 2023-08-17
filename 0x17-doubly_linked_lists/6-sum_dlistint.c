#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all data elements
 * @head: points to the first node of the list
 *
 * Return: the sum of all the data elements
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = head;

	if (head == NULL)
		return (sum);
	while (temp->next != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	sum += temp->n;
	return (sum);
}

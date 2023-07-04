#include "lists.h"

/**
 * sum_listint -  function that returns the sum of all the data elements
 * @head: the head pointer of the list to add it data elements
 *
 * Return: Sum of the data elements
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);
	while (head->next != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	sum += head->n;
	return (sum);
}

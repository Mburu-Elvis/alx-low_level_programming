#include "lists.h"

/**
* sum_listint - function to sum the all the data (n) in  the list
* @head: the first element/node in the list
*
* Return: sum of all the data (n) in every element
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

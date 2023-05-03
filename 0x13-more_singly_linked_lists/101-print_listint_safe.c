#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a linked list of integers (handles loops)
 * @head: Pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *curr = head, *temp;

	while (curr != NULL)
	{
		count++;
		printf("[%p] %d\n", (void *)curr, curr->n);
		temp = curr;
		curr = curr->next;
		if (temp < curr)
		{
			printf("-> [%p] %d\n", (void *)curr, curr->n);
			break;
		}
		else if (curr == NULL)
		{
			printf("-> [NULL]\n");
		}
	}
	return (count);
}

#include "lists.h"

/**
 * free_listint - free the memory allocated to the list and its elements
 * @head: pointer to the list
 *
 * Description: free memory space from the heap allocated to the list
 * Return: None
 */
void free_listint(listint_t *head)
{
	listint_t *freeNode;

	while (head != NULL)
	{
		freeNode = head;
		head = head->next;
		free(freeNode);
	}
}

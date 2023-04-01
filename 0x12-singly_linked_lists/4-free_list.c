#include "lists.h"
#include <stdlib.h>

/**
 * free_list -  a function that frees a list list_t
 * @head: the head of the list
 *
 * Description: deallocating memory previously allocated for list_t
 * Return: None
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
	head = NULL;
}

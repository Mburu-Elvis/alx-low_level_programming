#include "lists.h"

/**
* free_list - a function that frees a list_t list
* @head: the head of a list
*
* Return: None
*/
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		if (head->next == NULL)
		{
			free(head->str);
			free(head);
			break;
		}
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}

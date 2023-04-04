#include "lists.h"

/**
 * free_listint2 -  freeing the allocaated space to a list
 * @head: pointer to pointer of the head node
 *
 * Description: free a node by setting the head pointer to null
 * Return: None
 */
void free_listint2(listint_t **head)
{
	listint_t *freeNode, *tempNode;

	if (head == NULL)
		return;
	freeNode = *head;
	while (freeNode != NULL)
	{
		tempNode = freeNode;
		freeNode = freeNode->next;
		free(tempNode);
	}
	*head = NULL;
}

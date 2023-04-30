#include "lists.h"

/**
* add_node_end - function to add a node at the end of the list
* @head: the beginning of the list
* @str: character pointer
*
* Return: pointer to the head of the list
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *temp;
	unsigned int len = 0;

	temp = *head;
	newNode = malloc(sizeof(list_t));
	while (str[len] != '\0')
		len++;
	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->len = len;
	newNode->next = NULL;
	if (*head == NULL)
		*head = newNode;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newNode;
	}
	return (newNode);
}

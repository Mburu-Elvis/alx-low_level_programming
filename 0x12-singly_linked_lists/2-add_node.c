#include "lists.h"

/**
* add_node - a function to add a new node at the beginning
* @head: the begining of a list or type list_t
* @str: string pointer
*
* Return: address of the new element
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	unsigned int len = 0;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	for (; str[len] != '\0'; len++)
	{}
	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->len = len;
	newNode->next = *head;
	*head = newNode;
	return (*head);
}

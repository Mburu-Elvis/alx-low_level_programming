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
	char *str1;
	unsigned int len = 0;

	newNode = malloc(sizeof(list_t));
	str1 = strdup(str);
	for (; str1[len] != '\0'; len++)
	{}
	newNode->str = str1;
	newNode->len = len;
	newNode->next = *head;
	*head = newNode;
	return (*head);
}

#include "lists.h"
#include <stdio.h>

/**
 * add_node_end - function that adds a new node at the end of the list
 * @head: the head of the list
 * @str: string element for the new node
 *
 * Return: address of the ne element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	int i = 0;

	if (str == NULL)
		str = "(nil)";
	else
	{
		while (str[i] != '\0')
			i++;
	}
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_node;
	return (new_node);
}

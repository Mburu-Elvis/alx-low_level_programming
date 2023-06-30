#include "lists.h"
#include <stdio.h>

/**
 * add_node - function tat adds a new node at the beginning of a list
 * @head: the head of the list;
 * str: the strig element of the new node
 *
 * Return: address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int i = 0;

	if (str == NULL)
		i = 0;
	else
	{
		while (str[i] != '\0')
		{
			i++;
		}
	}
	new_node = malloc(sizeof(list_t));
	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}

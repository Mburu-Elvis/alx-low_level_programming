#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - add a node at the end of the list
 * @head: pointer to the node head
 * @str: pointer to the string element
 *
 * Description: a function that adds a node at the end of the list
 * Return: address of the new element
 * else: NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *temp = *head;
	size_t n = 0;

	if (new == NULL)
		return (NULL);
	for (;str[n] != '\0'; n++)
	{}
	new->str = strdup(str);
	new->len = n;
	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp = new;
		new->next = NULL;
		*head = temp;
	}
	return (*head);
}

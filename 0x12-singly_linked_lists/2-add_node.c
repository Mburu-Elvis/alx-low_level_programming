#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_node - add a node to a list
 * @head: a pointer to the new head
 * @str: the str element in a node
 *
 * Description: add a node to a list at the beginning
 * Return: address of new element
 * else: NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t n = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	for (; str[n] != '\0'; n++)
	{}
	n--;
	new->len = n;
	new->next = *head;
	*head = new;
	return (*head);
}

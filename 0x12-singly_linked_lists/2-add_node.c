#include "lists.h"
#include <stdio.h>
#include <strings.h>
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
	list_t new = malloc(sizeof(list_t));

	new->str = strdup(str);
	new->next = head;
	head = new;
	if (head == NULL)
		return (NULL);
	else
		return (head);
}

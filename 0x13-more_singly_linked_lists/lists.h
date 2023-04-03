#ifndef _MAIN_H
#define _MAIN_H
#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s -singly linked list
 * @n: integer
 * @next: points to the the next node
 *
 * Description: Singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;
size_t print_listint(const listint_t *h);
#endif

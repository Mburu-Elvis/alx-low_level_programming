#ifndef _LISTS_H
#define _LISTS_H
#include <stdlib.h>
#include <stddef.h>
int _putchar(char c);
typedef struct node list_t;

/**
 * struct node -  a struct definitaion
 *
 * @str: a string
 * @len: length of the string
 * @next: next node address
 * Description: a struct node
 */
struct node
{
	char *str;
	unsigned int len;
	list_t *next;
};
size_t print_list(const list_t *h);
#endif

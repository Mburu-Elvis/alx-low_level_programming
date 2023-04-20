#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 * @name: pointer to the name string
 * @f: a function pointer
 *
 * Return: None
 */
void print_name(char *name, void (*f) (char *))
{
	if (name != NULL)
		f(name);
}

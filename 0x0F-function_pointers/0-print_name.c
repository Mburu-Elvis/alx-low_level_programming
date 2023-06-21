#include <stdio.h>

/**
 * print_name - function that prints a name
 * @name: pointer to name string
 * @f: function pointer
 *
 * Return: None
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

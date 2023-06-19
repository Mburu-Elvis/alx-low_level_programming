#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function that prints a struct dog
 * @d: the struct dog to print
 *
 * Return: None
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: %s\n", "(nil)");
	if (!d->age)
		printf("Age: %s\n", "(nil)");
	if (d->owner == NULL)
		printf("Owner: %s\n", "(nil)");
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}

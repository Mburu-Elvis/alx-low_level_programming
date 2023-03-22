#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - function that print a dog struct
 * @d: dog struct
 *
 * Description: a fucntion that prints the struct dog d
 * Return: None
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
	if (d->age != 0.0)
		printf("Age: %f\n", d->age);
	else
		printf("Age: (nil)\n");
	printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
}

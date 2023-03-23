#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - typedef for dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Desription: New dog
 * Return: new_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p_dog;
	int lname, lowner, i, j;

	p_dog = malloc(sizeof(*p_dog));
	if (p_dog == NULL || !(name) || !(owner))
	{
		free(p_dog);
		return (NULL);
	}
	for (lname = 0; name[lname]; lname++)
	{}
	for (lowner = 0; owner[lowner]; lowner++)
	{}
	p_dog->name = malloc(lname + 1);
	p_dog->owner = malloc(lowner + 1);
	for (i = 0; i < lname; i++)
		p_dog->name[i] = name[i];
	p_dog->name = '\0';
	p_dog->age = age;
	for (j = 0; j < lowner; j++)
		p_dog->owner[j] = owner[j];
	p_dog->owner[j] = '\0';

	return (p_dog);
}

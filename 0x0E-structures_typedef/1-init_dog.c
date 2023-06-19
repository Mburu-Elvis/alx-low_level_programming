#include "dog.h"

/**
 * init_dog -  function that initializes a variable of type struct dog
 * @d: pointer to a struct of type dog
 * @name: pointer to string of characters, name of the dog
 * @age: a float variable to age of the dog
 * @owner: pointer to string of characters, owner of the dog
 *
 * Return: None
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

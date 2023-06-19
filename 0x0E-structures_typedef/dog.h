#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - dog struct definition
 * @name: dog's name element
 * @age: dog's age element
 * @owner: dog's owner element
 *
 * Description: struct dog with three elements
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif

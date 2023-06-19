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
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif

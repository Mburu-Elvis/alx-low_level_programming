#ifndef DOG_H
#define DOG_H
/**
 * struct dog - struct describing a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner's name pointer
 *
 * Description: struct desribing a dog's details
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif

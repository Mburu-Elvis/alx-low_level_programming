#include <stdio.h>

void printBeforeMain() __attribute__((constructor));
void printBeforeMain()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

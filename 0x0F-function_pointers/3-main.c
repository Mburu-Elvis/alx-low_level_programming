#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - the main function of the program
 * @argc: the number of arguments passed
 * @argv: pointer to the string arguments passed to the program
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int a, b, result;
	char *op;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];
	if ((*op == '/' || *op == '%') && b == 0)
	{
		printf("Error\n");
		return (100);
	}
	func = get_op_func(op);
        if (func == NULL)
        {
                printf("Error\n");
                return (99);
        }
	result = func(a, b);
	printf("%d\n", result);
	return (0);
}

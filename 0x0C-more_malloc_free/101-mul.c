#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * multiply - Multiplies two numbers
 * @num1: The first number
 * @num2: The second number
 *
 * Return: The result of the multiplication
 */
int multiply(char *num1, char *num2)
{
	int len1 = 0, len2 = 0, i, j, val1, val2, res, carry = 0;
	int *result;

	while (num1[len1])
		len1++;
	while (num2[len2])
		len2++;
	result = calloc(len1 + len2, sizeof(int));
	if (!result)
		return (0);
	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		val1 = num1[i] - '0';
		for (j = len2 - 1; j >= 0; j--)
		{
			val2 = num2[j] - '0';
			res = val1 * val2 + result[i + j + 1] + carry;
			carry = res / 10;
			result[i + j + 1] = res % 10;
		}
		result[i + j + 1] += carry;
	}
	for (i = 0; i < len1 + len2 && result[i] == 0; i++)
	{}
	if (i == len1 + len2)
	{
	putchar('0');
	}
	else
	{
		for (; i < len1 + len2; i++)
		putchar(result[i] + '0');
	}
	putchar('\n');
	free(result);
	return (1);
}

/**
 * main - Entry point
 * @argc: The number of arguments
 * @argv: The array of arguments
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	for (i = 1; i <= 2; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (98);
			}
		}
	}
	return (multiply(argv[1], argv[2]) ? 0 : 98);
}

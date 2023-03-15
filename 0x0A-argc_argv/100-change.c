#include <stdio.h>
#include <stdlib.h>

/**
 * main - the main funtion of the program
 * @argc: the number of arguments passed to the program
 * @argv: a pointer to the string aguments passed to the program
 *
 * Description: a program that prints the minimum number of coins for change
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x, num, i, temp = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num = atoi(argv[1]);
		if (num > 0)
		{
			for (i = 0; i < 5; i++)
			{
				x = num / coins[i];
				num = num % coins[i];
				temp += x;
			}
			printf("%d\n", temp);
		}
		else
		{
			printf("%d\n", 0);
		}
	}
	return (0);
}

#include "main.h"

/**
 * times_table - times table from 0 - 9
 *
 * Description: prints the 9 times table
 * Return: None
 */
void times_table(void)
{
	int i, j, sum;

	for (i = 0; i < 10; ++i)
	{
		for (j = 0; j < 10; ++j)
		{
			sum = i * j;
			if (sum > 9)
			{
				_putchar(sum / 10 + '0');
				_putchar(sum % 10 + '0');
			}
			else
			{
				_putchar(sum + '0');
			}
			if (j < 9)
			{
				if (sum < 10)
				{
					_putchar(sum + '0');
					_putchar(',');
					_pu
				_putchar(',');
			}
		}
		_putchar('\n');
	}

}

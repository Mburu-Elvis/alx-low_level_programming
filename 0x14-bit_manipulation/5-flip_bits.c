#include "main.h"
#include "2-get_bit.c"
/**
 * flip_bits - Returns the number of bits you would need to flip.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned int index;

	for (index = 0; index < sizeof(unsigned long int) * 8; index++)
	{
		if ((get_bit(n, index) ^ get_bit(m, index)) == 1)
		{
			count++;
		}
	}
	return (count);
}

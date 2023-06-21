#include "3-calc.h"

/**
 * op_add - function that adds two numbers
 * @a: first value
 * @b: second value
 *
 * Return: Sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that calculates the subtraction of two numbers
 * @a: first value
 * @b: second value
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that finds the product between two numbers
 * @a: first value
 * @b: second value
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that divides two numbers
 * @a: first value
 * @b: second value
 *
 * Return: division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - fucntion that performs modulus division between two numbers
 * @a: first value
 * @b: second value
 *
 * Return: a modulus b
 */
int op_mod(int a, int b)
{
	return (a % b);
}

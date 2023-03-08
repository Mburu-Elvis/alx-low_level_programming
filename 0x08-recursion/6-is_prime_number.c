#include "main.h"

/**
 * prime - primality check
 * @n: number to evaluate
 * @c: base case
 *
 * Return: prime no checker
 */
int prime(int n, int c)
{
    if (c * c > n)
    {
        return 1;
    }
    if (n % c == 0)
    {
        return 0;
    }
    return prime(n, c + 1);
}
/**
 * is_prime_number - check if a number is prime
 * @n: number to evaluate
 *
 * Return: i if prime 0 if otherwise
 */
int is_prime_number(int n)
{
    if (n < 2)
    {
        return 0;
    }
    return prime(n, 2);
}

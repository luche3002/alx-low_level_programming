#include "main.h"
#include <stdio.h>

/**
 * is_prime_number02 - checks for factors.
 * @n: integer to be checked
 * @x: divisor being checked.
 *
 * Return: 1 or 0
 */
int is_prime_number02(int n, int x)
{
	if (n % x == 0)
	{
		return (0);
	}
	if (x * x > n)
	{
		return (1);
	}
	return (is_prime_number02(n, x + 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: integer to be checked
 *
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (is_prime_number02(n, 2));
	}
}

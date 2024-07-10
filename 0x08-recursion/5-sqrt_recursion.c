#include "main.h"
#include <stdio.h>

/**
 * sqrt_recursion02 - helps function to find the square root using recursion.
 * @n: number to be square rooted
 * @x: current square root.
 *
 * Return: The square root of n
 */

int sqrt_recursion02(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	if (x * x > n)
	{
		return (-1);
	}
	return (sqrt_recursion02(n, x + 1));
}

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: number to be square rooted
 *
 * Return: square root of a number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	return (sqrt_recursion02(n, 1));
}

#include "main.h"
#include <stdio.h>

/**
 * factorial - returns the factorial of the given number
 * @n: number of which factorial is printed
 *
 * Return: factorial of n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n -1));
	}
}

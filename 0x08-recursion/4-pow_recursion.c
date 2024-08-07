#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - returns value of x raised to the power of y
 * @x: the base number
 * @y: the exponential number
 *
 * Return: x raised to power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}

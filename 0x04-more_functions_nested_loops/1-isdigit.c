#include "main.h"

/**
 * _isdigit - checks for a digit ( 1 through 9)
 * @c: The integer to be checked
 *
 * Return: 0 or 1
 */

int _isdigit(int c);
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

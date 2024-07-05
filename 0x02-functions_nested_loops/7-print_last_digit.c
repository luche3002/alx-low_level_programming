#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: Integer to be checked
 *
 * Return: Last digit of the integer
 */

int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
	{
		last = -last;
	}
	_putchar ('0' + last);
	return (last);
}

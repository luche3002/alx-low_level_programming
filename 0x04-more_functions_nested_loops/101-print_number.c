#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 *
 * Return: an integer
 */

void print_number(int n)
{
	unsigned int num = n;
	int div = 1;

	if (n < 0)
	{
		_putchar ('-');
		num = -n;
	}
	while (num / div >= 10)
	{
		div *= 10;
	}
	while (div != 0)
	{
		_putchar ((num / div) % 10 + '0');
		div /= 10;
	}
}

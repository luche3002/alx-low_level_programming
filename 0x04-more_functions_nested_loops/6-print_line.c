#include "main.h"

/**
 * print_line - prints a line in the terminal
 * @n: the number of times the '_' character is repeated
 *
 * Return: a line in the terminal
 */

void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			_putchar ('_');
		}
		_putchar ('\n');
	}
}

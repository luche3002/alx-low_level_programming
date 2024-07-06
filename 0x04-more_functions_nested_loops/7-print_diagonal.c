#include "main.h"

/**
 * print_diagonal - prints a diagonal in the termainl
 * @n: the number of times the '/' character is printed
 *
 * Return: a diagonal line
 */

void print_diagonal(int n)
{
	int x;
	int y;

	if (n <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
				_putchar (' ');
			}
			_putchar ('\\');
			_putchar ('\n');
		}
	}
}

#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all integers from n to 98
 * @n: first integer
 *
 * Return: Void
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != n)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (i < 0)
			{
				_putchar('-');
				i = -i;
			}
			if (i >= 10)
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
			}
			else
			{
				for (int i = n; i >= 98; i--)
				{
					if (i != n)
					{
						_putchar(',');
						_putchar(' ');
					}
					if (i < 0)
					{
						_putchar('-');
						i = -i;
					}
					if (i >= 10)
					{
						_putchar(i / 10 + '0');
						_putchar(i % 10 + '0');
					}
				}
				_putchar('\n');
			}
		}
	}
}

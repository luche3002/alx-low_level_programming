#include "main.h"

/**
 * more_numbers - prints numbers 0 - 14, 10 times
 *
 * Return: numbers 0 - 14, 10 times
 */

void more_numbers(void)
{
	int x;
	int y;
	char z;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y > 9)
			{
				_putchar ('1');
			}
			z = y % 10 + '0';
			_putchar (z);
		}
		_putchar ('\n');
	}
}

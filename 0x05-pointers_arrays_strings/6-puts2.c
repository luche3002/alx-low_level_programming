#include "main.h"

/**
 * puts2 - prints every other char of a string, starting with the first char.
 * @str: values to be printed
 *
 * Return: Characters of string
 */

void puts2(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		if (x % 2 == 0)
		{
			_putchar (str[x]);
		}
		x++;
	}
	_putchar ('\n');
}

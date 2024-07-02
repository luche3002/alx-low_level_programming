#include "main.h"
#include <string.h>

/**
 * puts_half - prints half a string
 * @str: string to be printed
 *
 * Return: Half string length
 */

void puts_half(char *str)
{
	int len = strlen(str);
	int x;

	int start = (len + 1) / 2;

	for (x = start; x < len; x++)
	{
		_putchar(str[x]);
	}
	_putchar ('\n');
}

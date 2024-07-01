#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: string to be printed
 *
 * Return: String in reverse
 */

void print_rev(char *s)
{
	int l = 0;
	char *start = s;
	int len;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	for (len = l - 1; len >= 0; len--)
	{
		_putchar (start[len]);
	}
	_putchar('\n');
}

#include "main.h"

/**
 * _puts -Prints put string
 * _putchar - Inputs characters
 * @str: String to be printed
 *
 * Return: String in stdout
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - prints the length of a string
 * @s: string to be checked
 *
 * Return: length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

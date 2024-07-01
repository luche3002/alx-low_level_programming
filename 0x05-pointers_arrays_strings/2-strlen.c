#include "main.h"

/**
 * _strlen - Prints length of string
 * @x: Length of the string
 * @s: Value of the string
 *
 * Return: The length of the string
 */

int _strlen(char *s)
{
	int x = 0;

	while (*s != '\0')
	{
		x++;
		s++;
	}
	return (x);
}

#include "main.h"

/**
 * int _strlen - prints the length of the string
 * @x: This is the length of the string
 * @*s: This is the value of the string itself
 *
 * Return: The length of the string
 */

int _strlen(char *s)
{
	int x;
	x = 0;
	while (*s != '\0')
	{
		x++;
	        s++;
	}
	return (x);
}

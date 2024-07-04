#include "main.h"

/**
 * string_toupper - changes all lowercase letters in a string to uppercase
 * @str: string to be changed
 *
 * Return: pointer of the chanegd string
 */

char *string_toupper(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		if ( str[x] >= 'a' && str[x] <= 'z')
		{
			str[x] = str[x] -32;
		}
		x++;
	}
	return str;
}

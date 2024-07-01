#include "main.h"

/**
 * rev_string - reverses a string
 * @s: values of string
 *
 * Return: String in reverse
 */

void rev_string(char *s)
{
	int l = 0;
	char *strt = s;
	char *end = s;
	char c;

	while (*end != '\0')
	{
		l++;
		end++;
	}
	end--;

	while (strt < end)
	{
		c = *strt;
		*strt = *end;
		*end = c;

		strt++;
		end--;
	}
}

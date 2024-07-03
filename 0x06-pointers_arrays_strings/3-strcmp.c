#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: fiest string
 * @s2: second string
 *
 * Return: two integers, s1 and s2
 */

int _strcmp(char *s1, char *s2)
{
	int x = 0;

	while(s1[x] != '\0' && s2[x] != '\0')
	{
		if (s1[x] != s2[x])
		{
			return s1[x] - s2[x];
		}
		x++;
	}
	return s1[x] - s2[x];
}

#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to be checked
 * @needle: substring to be located
 *
 * Return: the string needle
 */

char *_strstr(char *haystack, char *needle)
{
	char *h;
	char *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}

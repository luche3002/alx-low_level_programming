#include "main.h"

/**
 * cap_string - makes all words in a string capital
 * @str: string to be changed
 *
 * Return: pointer to capitalized string
 */

char *cap_string(char *str)
{
	int x = 0;
	int y;
	char sep[] = " \t\n,;.|?\"(){}";

	if (str[x] >= 'a' && str[x] <= 'z')
	{
		str[x] -= 32;
	}
	while (str[x] != '\0')
	{
		for (y = 0; sep[y] != '\0'; y++)
		{
			if (str[x] == sep[y])
			{
				if (str[x + 1] >= 'a' && str[x + 1] <= 'z')
				{
					str[x + 1] -= 32;
				}
				break;
			}
		}
		x++;
	}
	return str;
}

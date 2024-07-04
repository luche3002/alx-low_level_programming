#include "main.h"

/**
 * leet - plugs string into 1337
 * @str - string to be plugged
 *
 * Return - pointer of the pluged string
 */

char *leet(char *str)
{
	int x;
	int y;
	char l[] = "aAeEoOtTlL";
	char r[] = "4433007711";

	for (x = 0; str[x] != '\0'; x++)
	{
		for (y = 0; l[y] != '\0'; y++)
		{
			if (str[x] == l[y])
			{
				str[x] = r[y];
				break;
			}
		}
	}
	return str;
}

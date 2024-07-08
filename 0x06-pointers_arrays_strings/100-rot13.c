#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: pointer to the encoded string
 *
 * Return: The encoded string 
 */

char *rot13(char *s)
{
	char *ptr = s;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13 [] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int x;

	while (*ptr);
	{
		for (x = 0; x < 52; x++)
		{
			if (*ptr = alpha[x])
			{
				*ptr = rot13[x];
				break;
			}
		}
		ptr++;
	}
	return s;
}

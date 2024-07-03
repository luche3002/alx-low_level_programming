#include "main.h"

/**
 * _atoi - converts a string to integer
 * @s: String to be converted
 *
 * Return: Integer
 */

int _atoi(char *s)
{
	int res = 0;
	int sign = 1;
	int x = 0;

	while (s[x] != '\0')
	{
		if (s[x] == '-')
		{
			sign *= -1;
		}
		else if (s[x] >= '0' && s[x] <= '9')
		{
			while (s[x] >= '0' && s[x] <= '9')
			{
				res = res * 10 + (s[x] - '0');
				x++;
			}
			break;
		}
		x++;
	}
	return (res * sign);
}

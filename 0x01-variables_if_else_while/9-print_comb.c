#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: - Always 0 (Success)
 *
 */
int main(void)

{
	int tens;

	for (tens = 0; tens < 10; tens++)
	{
		putchar(tens + '0');

		if (tens != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}

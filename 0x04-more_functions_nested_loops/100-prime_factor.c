#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints largest prime factor of 612852475143
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long num = 612852475143;
	long max = -1;
	long x;

	while (num % 2 == 0)
	{
		max = 2;
		num /= 2;
	}
	for (x = 3; x <= sqrt (num); x += 2)
	{
		while (num % x == 0)
		{
			max = x;
			num /= x;
		}
	}
	if (num > 2)
	{
		max = num;
	}
	printf ("%ld\n", max);

	return (0);
}

#include <stdio.h>

/**
 * main - prints all received arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (SUCCESS)
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}

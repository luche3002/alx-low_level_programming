#include <stdio.h>

/**
 * main - prints number of arguments passed into the program
 * @argc: number of command line arguments
 * @argv: array containing command line arguments
 *
 * Return: Always 0 (SUCCESS)
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return(0);
}

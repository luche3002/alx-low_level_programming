#include <unistd.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */

int _putchar(char c)
{
	return write(1, &c, 1);
}

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return 1;
	}
	return 0;
}

int main()
{
	char testChar1 = 'A';
	char testChar2 = 'a';
	char testChar3 = 'Z';
	char testChar4 = 'z';
	char testChar5 = 'M';

	if (_isupper(testChar1))
	{
		_putchar(testChar1);
		_putchar(' ');
		_putchar('i');
		_putchar('s');
		_putchar(' ');
		_putchar('u');
		_putchar('p');
		_putchar('p');
		_putchar('e');
		_putchar('r');
		_putchar('c');
		_putchar('a');
		_putchar('s');
		_putchar('e');
		_putchar('\n');
	}

	if (_isupper(testChar2))
	{
		_putchar(testChar2);
		_putchar(' ');
		_putchar('i');
		_putchar('s');
		_putchar(' ');
		_putchar('u');
		_putchar('p');
		_putchar('p');
		_putchar('e');
		_putchar('r');
		_putchar('c');
		_putchar('a');
		_putchar('s');
		_putchar('e');
		_putchar('\n');
	}

	if (_isupper(testChar3))
	{
		_putchar(testChar3);
		_putchar(' ');
		_putchar('i');
		_putchar('s');
		_putchar(' ');
		_putchar('u');
		_putchar('p');
		_putchar('p');
		_putchar('e');
		_putchar('r');
		_putchar('c');
		_putchar('a');
		_putchar('s');
		_putchar('e');
		_putchar('\n');
	}

	if (_isupper(testChar4))
	{
		_putchar(testChar4);
		_putchar(' ');
		_putchar('i');
		_putchar('s');
		_putchar(' ');
		_putchar('u');
		_putchar('p');
		_putchar('p');
		_putchar('e');
		_putchar('r');
		_putchar('c');
		_putchar('a');
		_putchar('s');
		_putchar('e');
		_putchar('\n');
	}

	if (_isupper(testChar5))
	{
		_putchar(testChar5);
		_putchar(' ');
		_putchar('i');
		_putchar('s');
		_putchar(' ');
		_putchar('u');
		_putchar('p');
		_putchar('p');
		_putchar('e');
		_putchar('r');
		_putchar('c');
		_putchar('a');
		_putchar('s');
		_putchar('e');
		_putchar('\n');
	}

	return 0;
}

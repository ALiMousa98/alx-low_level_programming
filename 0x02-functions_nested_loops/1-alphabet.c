#include "main.h"

/**
 * main - Entry Block
 *Description: prints _putchar followed by a new line
 * Return: 0
 */


void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c++);
	}

	_putchar('\n');

	return (0);
}

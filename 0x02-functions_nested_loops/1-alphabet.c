#include "main.h"

/**
 * print_alphabet - entry point
 * Description - prints all alphabet, in lowercase, followed by a new line
 * Return
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c++);
	}

	_putchar('\n');

}

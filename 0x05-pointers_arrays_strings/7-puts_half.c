#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 *  puts_half - length of the strin
 *  @str: pointer to string
 * Return: void
*/

void puts_half(char *str)
{

	int c = strlen(str);

	if (c % 2 != 0)
		c = (c-1) / 2;
	else
		c = c / 2;

	while (str[c] != '\0')
		_putchar(str[c++]);
	_putchar('\n');
}

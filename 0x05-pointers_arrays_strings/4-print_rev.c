#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 *  print_rev - length of the strin
 *  @s: pointer to string
 * Return: void
*/

void print_rev(char *s)
{

	int c = strlen(s);

	while (c >= 0)
		_putchar(s[c--]);
	_putchar('\n');
}

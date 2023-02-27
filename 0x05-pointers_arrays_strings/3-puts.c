#include <stdio.h>
#include "main.h"


/**
 *  _puts - length of the strin
 *  @str: pointer to string
 * Return: void
*/

void _puts(char *str)
{

	int c = 0;
	while (str[c] != '\0')
		_putchar(str[c++]);
	_putchar('\n');
}

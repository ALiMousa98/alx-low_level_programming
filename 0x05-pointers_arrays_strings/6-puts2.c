#include <stdio.h>
#include "main.h"


/**
 *  puts2 - length of the strin
 *  @str: pointer to string
 * Return: void
*/

void puts2(char *str)
{

	int c = 0;

	while (str[c] != '\0')
	{
		if (c % 2 == 0)
			_putchar(str[c++]);
		else
			c++;
	}
	_putchar('\n');
}

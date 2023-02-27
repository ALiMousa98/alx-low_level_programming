#include <stdio.h>
#include "main.h"

/**
 *  _strlen - length of the strin
 *  @s: pointer to string
 * Return: counter
*/

int _strlen(char *s);
{
	int c = 0;

	while (s[c] != '\0')
		c++;
	return (c);
}

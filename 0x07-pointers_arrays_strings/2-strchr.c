#include "main.h"
#include <stddef.h>

/**
 * _strchr - copies n bytes from memory area src to memory area dest
 *
 * @s: array to be searched
 * @c: the character to search for
 * Return: pointer the array after get the first occurance
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] != c)
			i++;
		else
			return (s + i);
	}
	return ('\0');
}

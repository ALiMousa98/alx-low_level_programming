#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcpy - print `n` elements of an array of integers
 * @dest: int type array pointer
 * @src: int type integer
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	do
	{
		dest[i] = src[i];
		i++;

	}while (src[i] != '\0');
	return (dest);

}

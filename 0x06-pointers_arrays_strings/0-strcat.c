#include "main.h"
#include <string.h>

/**
 * _strcat - Concat 2 strings
 *
 * @dest: the array to concat into
 * @src: the array to be concatinated
 *
 * Return: address of dest
 */


char *_strcat(char *dest, char *src)
{
	int i = strlen(dest) - 1;
	int j = 0;

	while (src[j] != '\0')
	{
		dest[i++] = src[j++];
	}
	dest[i] = '\0';
	return (dest);

}






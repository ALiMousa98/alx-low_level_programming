#include "main.h"


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
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i++] = src[j++];
	}
	dest[i] = '\0';
	return (dest);

}






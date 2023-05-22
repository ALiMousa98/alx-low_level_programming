#include "main.h"


/**
 * _strncat - Concat 2 strings with n characters
 *
 * @dest: the array to concat into
 * @src: the array to be concatinated
 * @n: number of appended chars.
 * Return: address of dest
 */


char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	int c = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && c < n)
	{
		dest[i++] = src[j++];
		c++;
	}
	dest[i] = '\0';
	return (dest);

}






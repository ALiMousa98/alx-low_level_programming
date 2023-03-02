#include "main.h"

/**
 * *_strncpy -  copies the string pointed to by src
 * @dest: char type string
 * @src: char type string
 * @n: number of chars to be copied
 * Description: Copy the string pointed to by pointer `src` to
 * the buffer pointed to by `dest`
 * Return: Pointer to `dest`
 */

char *_strncpy(char *dest, char *src, int n)
{
	/*
	*int index = -1;
	*int c = 0;
	*
	*do {
	*	index++;
	*	dest[index] = src[index];
	*	c++;
	*} while (src[index] != '\0' && c < n);
	*while (c < n)
	*{
	*	dest[++index] = '\0';
	*	c++;
	*}
	*/

	int x = 0;

	for ( ; x < n && src[x] != '\0'; x++)
		dest[x] = src[x];
	for ( ; x < n; x++)
		dest[x] = '\0';

	return (dest);
}

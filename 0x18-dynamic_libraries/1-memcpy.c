#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 *
 * @src: array to be copied
 * @dest: array to be filled
 * @n: Number of bytes to be filled starting from ptr to be filled
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];
	return (dest);
}

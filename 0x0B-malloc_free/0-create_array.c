#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array  - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of array
 * @c: the specific char to be initialized
 * Return: pointer to the array or Null if fails
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (0);
	arr = malloc((size) * sizeof(char));
	if (arr == 0)
		return (0);
	for (i = 0 ; i < size; i++)
		arr[i] = c;
	return (arr);
}

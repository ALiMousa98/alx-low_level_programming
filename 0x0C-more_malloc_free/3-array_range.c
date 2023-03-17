#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range  - create an array from min to max
 * @min: start of array
 * @max: end of array
 * Return: pointer to the array
 */

int *array_range(int min, int max)
{
	int *arr;
	int i, j;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);
	for (i = min, j = 0; i <= max; i++, j++)
		arr[j] = i;
	return (arr);
}

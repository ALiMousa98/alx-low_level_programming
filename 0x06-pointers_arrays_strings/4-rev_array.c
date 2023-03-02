#include <stdio.h>
#include "main.h"

/**
 *  reverse_array - length of the strin
 *  @a: pointer to int
 *  @n: length of array
 * Return: void
*/

void reverse_array(int *a, int n)
{
	int i;
	int tmp;
	int j = n - 1;

	for (i = 0; i < n / 2; i++, j--)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}

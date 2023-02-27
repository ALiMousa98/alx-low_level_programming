#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 *  print_array - length of the strin
 *  @a: pointer to string
 *  @n: length of array
 * Return: void
*/

void print_array(int *a, int n)
{
	int i = 0;

	while (n >= 0)
	{
		printf("%d", a[i++]);
		if (n > 0)
			printf(",");
		n--;
	}
	printf("\n");
}

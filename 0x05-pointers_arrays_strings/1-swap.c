#include <stdio.h>
#include "main.h"

/**
 * swap_in - swap 2 values
 *  @a: pointer1
 *  @b: pointer2
 * Return: void
*/
void swap_int(int *a, int* b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

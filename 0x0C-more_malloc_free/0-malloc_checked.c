#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked  - allocate specific sized array
 * @b: size to be allocated
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}

#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: Pointer to the memory previously allocated
 * @old_size: The size of the allocated space for ptr
 * @new_size: The new size of the new memory block
 *
 * Return: Pointer to the reallocated memory block
 *         NULL, if malloc fails or new_size is 0 and ptr is not NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;

if (new_size == 0)
{
	free(ptr);
	return (NULL);
}

if (ptr == NULL)
{
	new_ptr = malloc(new_size);
	return (new_ptr);
}
if (new_size <= old_size)
	return (ptr);
new_ptr = malloc(new_size);
if (new_ptr == NULL)
	return (NULL);
memcpy(new_ptr, ptr, old_size);
free(ptr);
return (new_ptr);
}


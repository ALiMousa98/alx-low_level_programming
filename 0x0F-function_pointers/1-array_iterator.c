#include "function_pointers.h"

/**
  * array_iterator - loop into array and run a func passed as param
  * @array: array
  * @action: function to pass the string
  * @size: size of the array
  * Return: void
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;
	if (array && action)
		for ( ; i < size; i++)
			action(array[i]);
}

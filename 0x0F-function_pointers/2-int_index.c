#include "function_pointers.h"


/**
  * int_index - loop into array and run a func passed as param
  * @array: array
  * @cmp: function to compare 2 integers
  * @size: size of the array
  * Return: void
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	if (array && cmp)
		for ( ; i < size; i++)
			if (cmp(array[i]))
				return (i);
	return (-1);
}

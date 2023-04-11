#include "main.h"

/**
 * clear_bit  - get the value of a bit at a given index
 * @n: number to be searched
 * @index : place of the bit to be cleared
 * Return: the bit
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}

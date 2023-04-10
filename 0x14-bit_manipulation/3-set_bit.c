#include "main.h"

/**
 * set_bit  - get the value of a bit at a given index
 * @n: number to be searched
 * @index : place of the bit to be set
 * Return: the bit
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	return ( *n |= (1 << index));
	
}

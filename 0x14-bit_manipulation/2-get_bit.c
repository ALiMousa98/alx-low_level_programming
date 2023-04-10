#include "main.h"

/**
 * get_bit  - get the value of a bit at a given index
 * @n: number to be searched
 * @index: place of the bit
 * Return: the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	if (n & (1 << index))
		return (1);
	else
		return (0);
	
}

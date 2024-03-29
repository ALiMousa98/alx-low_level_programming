#include "main.h"

/**
 * print_binary  - converts a binary number to an unsigned int
 * @n: number to be converted into binary
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) ? '1' : '0');
}

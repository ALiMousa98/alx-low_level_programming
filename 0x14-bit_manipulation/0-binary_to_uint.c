#include "main.h"

/**
 * binary_to_unit  - converts a binary number to an unsigned int
 * @b: binary string
 * Return: uint
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int sum = 0;

if (b == NULL)
	return (0);
for (; *b != '\0'; b++)
{
	if (*b == '0' || *b == '1')
	{
		sum <<= 1;
		sum += *b - '0';
	}
	else
		return (0);
}
return (sum);
}

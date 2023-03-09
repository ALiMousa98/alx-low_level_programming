#include "main.h"

/**
 * _is_prime_helper - returns the natural square root of a number.
 * @n: input number.
 * @x: current number.
 * Return: natural square root.
 */
int _is_prime_helper(int n, int x)
{
	if (x == 1)
	{
		return (1);
	}
	if (n % x != 0)
	{
		return (1 && _is_prime_helper(n, x - 1));
	}

return (0);
}

/**
 * is_prime_number - raises x to the power of y
 * @n: Number Integer
 * Return: int
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (_is_prime_helper(n, n - 1));
}


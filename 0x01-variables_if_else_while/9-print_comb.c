#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c = 48;
	int  new = 1;

	while (c <= 57)
	{
		if (new == 0)
		{
		putchar(',');
		putchar(' ');
		}
		new = 0;
		putchar(c++);
	}
	putchar('\n');

	return (0);
}

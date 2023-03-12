#include "main.h"
#include <stdio.h>

/**
 * main - Prints arguments number
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for ( ; *argv; i++, argv++)
			;

		printf("%d\n", i - 1);
	}

	return (0);
}

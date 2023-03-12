#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints arguments
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int coins;
	int n;

	coins = 0;
	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	coins += n / 25;
	n = n % 25;
	coins += n / 10;
	n = n % 10;
	coins += n / 5;
	n = n % 5;
	coins += n / 2;
	n = n % 2;
	coins += n;
	printf("%d\n", coins);
	}

	return (0);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its own main function
 *
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 on success, 1 if incorrect number of arguments, 2 if negative
 * number of bytes
 */

int main(int argc, char *argv[])
{
	int num_bytes, i;
	unsigned char *opcodes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	opcodes = (unsigned char *) main;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", *(opcodes + i));
	}
	printf("\n");
	return (0);
}


#include "main.h"

/**
 * *_strcmp -  compare 2 strings
 * @s1: 1st string
 * @s2: 2nd string
 * Return: differnce of ASCII
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, c = 0;

	while (s1[c++] != '\0')
		c++;
	for ( ; i < c; i++)
	{
		if ((s1[i] - s2[i]) == 0)
			continue;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}

#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat  - returns a pointer to a newly allocated space in memory,
 * which contains a new concatenated array.
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to the new allocated array
 */

char *str_concat(char *s1, char *s2)
{
	char *dest = malloc(strlen(s1) + strlen(s2) + 1);

	if (dest == NULL)
		return (NULL);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	strcat(dest, s1);
	strcat(dest, s2);
	if (dest == NULL)
		dest = "";
	return (dest);
}

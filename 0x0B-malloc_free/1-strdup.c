#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup  - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: source string
 * Return: pointer to the new allocated array
 */

char *_strdup(char *str)
{
	char *arr;

	if (str == NULL)
		return (NULL);
	arr = malloc(strlen(str) + 1);
	strcpy(arr, str);
	return (arr);
}

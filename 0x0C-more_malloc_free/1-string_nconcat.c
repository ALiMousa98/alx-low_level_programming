#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat  - concatnate 2 strings with n chars from the 2nd string
 * @n: number of chars to be concatednated
 * @s1: 1st string
 * @s2: @nd string
 * Return: pointer to the new concatenated array
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	unsigned int len1, len2, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n > len2)
		n = len2;
	arr = malloc(len1 + n + 1);
	if (arr == NULL)
		return (NULL);
	strcpy(arr, s1);
	for (i = len1; i < len1 + n; i++)
		arr[i] = s2[i - len1];
	arr[i] = '\0';
	return (arr);

}

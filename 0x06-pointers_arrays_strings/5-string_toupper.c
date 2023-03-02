#include <stdio.h>
#include "main.h"

/**
 *  string_toupper - make the whole string uppercase
 *  @str: pointer to string
 * Return: Tbhe uppercase string
*/

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}

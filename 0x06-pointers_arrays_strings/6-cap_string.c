#include <stdio.h>
#include "main.h"

/**
 *  cap_string - make the whole string uppercase
 *  @str: pointer to string
 * Return: Tbhe uppercase string
*/

char *cap_string(char *str)
{
	int i = 0;
	int cap = 1;

	while (str[i] != '\0')
	{
		if (cap && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= ('a' - 'A');
			cap = 0;
		}
		else if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
				str[i] == ',' || str[i] == ';' ||
				str[i] == '.' || str[i] == '!' || str[i] == '?' || str[i] == '"' ||
				str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
			cap = 1;
		else
			cap = 0;
		i++;
	}
	return (str);
}

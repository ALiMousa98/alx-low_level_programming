#include <stdio.h>
#include "main.h"

/**
 *  leet - encode strings in 1337
 *  @str: pointer to string
 * Return: The encoded  string
*/

char *leet(char *str)
{
	/*
	*int i = 0;
	*
	*while (str[i] != '\0')
	*{
	*	if (str[i] == 'a' || str[i] == 'A')
	*		str[i] = '4';
	*	else if (str[i] == 'e' || str[i] == 'E')
	*		str[i] = '3';
	*	else if (str[i] == 'o' || str[i] == 'O')
	*		str[i] = '0';
	*	else if (str[i] == 't' || str[i] == 'T')
	*		str[i] = '7';
	*	else if (str[i] == 'l' || str[i] == 'L')
	*		str[i] = '1';
	*	i++;
	*}
	*return (str);
	*/
	int i, j;
	char *s1 = "aAeEoOtTlL";
	char *s2 = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
		for (j = 0; j < 10; j++)
			if (str[i] == s1[j])
				str[i] = s2[j];
	return (str);

}

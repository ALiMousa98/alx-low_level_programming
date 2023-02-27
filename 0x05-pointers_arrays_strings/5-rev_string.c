#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 *  rev_string - length of the strin
 *  @s: pointer to string
 * Return: void
*/

void rev_string(char *s)
{

	int c = strlen(s) - 1;
	char *ss = s;
	int i = 0;
	int j = 0;

	if (c < 1)
		return;
	while (c >= 0)
	{
		ss[i] = s[c];
		c--;
		i++;
	}
	i = 0;
	c = strlen(s) - 1;

	while (c >= 0)
	{
		s[i] = ss[j];
		i++;
		j++;
	}
}

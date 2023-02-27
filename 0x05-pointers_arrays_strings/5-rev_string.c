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
	int len, i;
	char tmp;

	len = strlen(s);
	if (len <= 1)
		return;
	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
}

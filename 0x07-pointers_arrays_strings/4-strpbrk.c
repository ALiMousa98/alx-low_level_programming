#include "main.h"

/**
  * _strpbrk - locate character in string
  * @s: source string
  * @accept: character to find
  *
  * Return: the string from character found
  */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return ('\0');
}

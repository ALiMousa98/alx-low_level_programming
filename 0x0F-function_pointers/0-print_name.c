#include "function_pointers.h"

/**
  * print_name - locate character in string
  * @name: string to be printed
  * @f: function to pass the string
  *
  * Return: the string from character found
  */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

#include <stdio.h>
#define RET 1
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char s[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
int i = 0;
for (i = 0; i < (int)sizeof(s) - 1; i++)
{
putchar (s[i]);
}

return (RET);
}

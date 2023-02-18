#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int  new = 1;
	int i = 48;
	int j = 48;
	int k = 48;
	int l = 48;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			for (k = i; k < 58; k++)
			{
				for (l = j + 1; l < 58; l++)
				{
					if (k > l)
					{
						if (new == 0)
						{
							putchar(',');
							putchar(' ');
						}
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(l);
					}
				new = 0;
				}
			}
		}
	}
	putchar('\n');

	return (0);
}

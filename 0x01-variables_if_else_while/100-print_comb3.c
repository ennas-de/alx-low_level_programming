#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, m;

	for (n = 18; n <= 26; n++)
	{
		for (m = 19; m <= 27; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 26 || m != 27)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

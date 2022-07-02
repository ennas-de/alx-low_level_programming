#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(tolower(ch));
	};

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(toupper(ch));
	};

	putchar('\n');
	return (0);
}


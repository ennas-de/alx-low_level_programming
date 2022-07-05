#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Return: Void (Nothing to return)
 */

void print_alphabet_x10(void)
{
	char ch;

	for (ch = 97; ch <= 122; ch++)
	{
		int i;

		for (i = 0; i < 10; i++)
			_putchar(ch);
	}

	_putchar('\n');
}

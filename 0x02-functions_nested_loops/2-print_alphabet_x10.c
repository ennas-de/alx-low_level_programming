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
		_putchar(ch * 10);
	}

	_putchar('\n');
}

#include "main.h"

/**
 * main - Print small letter Alpabets
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	
	for ( char ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}

	_putchar('\n');
}

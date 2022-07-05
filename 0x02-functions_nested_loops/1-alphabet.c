#include "main.h"

/**
 * main - Print small letter Alpabets
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	print_alphabet();
	
	for ( char ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}

	_putchar('\n');
	return (0);
}

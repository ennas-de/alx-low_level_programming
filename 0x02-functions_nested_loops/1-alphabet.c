#include "main.h"

/**
 * main - Print small letter Alpabets
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	print_alphabet();
	
	char ch;

	for ( ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}

	_putchar('\n');
	return (0);
}

#include "main.h"

/**
 * print_last_digit: Prints last digit of a number
 * @c: Int value to check
 * Return: Always 0 (Success)
 */

int print_last_digit(int c)
{
	int a;

	if (c < 0)
		c = -c;

	a = c % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);

	

}

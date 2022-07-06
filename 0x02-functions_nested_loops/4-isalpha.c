#include "main.h"

/**
 * _isalpha: checks for alphabetic character
 *
 * @c: function input
 *
 * Return: 1 if c is a letter, 0 otherwise
 */

int _isalpha(int c)
{
	char ch;

	for (ch = 'A'; ch <= 'z'; ch++)
		if (ch == c)
			return (1);
	return (0);
}

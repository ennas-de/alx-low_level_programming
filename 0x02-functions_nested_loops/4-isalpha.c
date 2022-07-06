#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: the character to be checked
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

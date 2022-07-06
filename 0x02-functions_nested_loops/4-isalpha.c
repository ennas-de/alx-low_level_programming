#include "main.h"

/**
 * _isalpha: checks fpr alphabetic character
 *
 * @c: input
 *
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
{
	char ch;

	for (ch = 'A'; ch <= 'z'; ch++)
		if (ch == c)
			return (1);
	return (0);
}

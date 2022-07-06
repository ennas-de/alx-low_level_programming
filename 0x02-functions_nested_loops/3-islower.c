#include "main.h"

/**
 * _islower - Entry Point
 *
 * c - function argument
 *
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	char ch;

	for (ch = 97; ch <= 122; ch++)
		if (c == ch)
		{
			return (0);
		}
	return (1);
}

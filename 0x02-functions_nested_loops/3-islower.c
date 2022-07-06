#include "main.h"

/**
 * islower - Entry Point
 *
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	char ch;

	for (ch = 97; ch <= 122; ch++)
		if (c == ch)
			return (1);
		else
			return (0);
}

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
			break;
			return (1);
		}
		else
		{
			break;
			return (0);
		}
}

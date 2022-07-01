#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

#define WORD "and that piece of art is useful\" - Dora Korpar, 2015-10-19"

int main(void)
{
	write(1, HELLO, 59);

	return (1);
}

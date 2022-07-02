#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* more headers goes there */

/* betty style doc for function main goes there */

int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	int len = strlen(n);
	int l_let = n[len - 1];

	if (l_let > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l_let);
	}
	else if (l_let == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, l_let);
	}
	else if (l_let < 6 && l_let != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l_let);
	}

	return (0);

}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main-Serves as the entry for the program
 * Return: By default returns zero if no errors otherwise returns non-zero
 * betty style doc for function main goes ther
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int lastDigit = n % 10;

	if (lastDigit > 5)
	{
		printf("Last digit of %1d is %2d and is greater than 5\n", n, lastDigit);
	}
	else if (lastDigit == 0)
	{
		printf("Last digit of %1d is %2d and is 0\n", n, lastDigit);
	}
	else if (lastDigit < 6 && lastDigit != 0)
	{
		printf("Last digit of %1d is %2d and is
		less than 6 and not 0\n", n, lastDigit);
	}
	return (0);
}

#include <stdio.h>
/**
 * main -Starting point of the program
 * Description: main -Prints out a string to stdout
 * Return: 0 if success
 */
int main(void)
{
	int i;

	int j;

	for (j = 0; j <= 9; j++)
	{
		for (i = 0; i <= 9; i++)
		{
			if (!((i == j) || (j > i)))
			{
				putchar(j + '0');
				putchar(i + '0');
				if ((j == 8) && (i == 9))
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

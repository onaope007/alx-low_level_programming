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

	int k;

	for (k = 0; k <= 9; k++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (i = 0; i <= 9; i++)
			{
				if (!((i == j) || (i == k) || (j == k) || (k > i)
				|| (j > i) || (k > j)))
				{
					putchar(k + '0');
					putchar(j + '0');
					putchar(i + '0');
					if ((k == 7) && (j == 8) && (i == 9))
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

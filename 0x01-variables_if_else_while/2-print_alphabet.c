#include <stdio.h>
/**
 * main -Starting point of the program
 * Description: main -Prints out a string to stdout
 * Return: 0 if success
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	return (0);
}

#include "main.h"
/**
 * print_sign - prints the alphabets in lower case
 * @n: is the character to be checked
 * Return: returns 0 if successful else return 1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

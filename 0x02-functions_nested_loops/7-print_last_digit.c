#include "main.h"
/**
 * print_last_digit - checks the absolute value of an int
 * @i: the int that is to be checked
 * Return: -k if true, else returns k
 */
int print_last_digit(int i)
{
	int number = i % 10;

	if (i >= 0)
	{
		_putchar(number + '0');
		return (i % 10);
	}
	else
	{
		_putchar((-1 * number) + '0');
		return (-1 * number);
	}
}

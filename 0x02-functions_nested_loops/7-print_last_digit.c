#include "main.h"
/**
 * print_last_digit - checks the absolute value of an int
 * @i: the int that is to be checked
 * Return: -k if true, else returns k
 */
int print_last_digit(int i)
{
	if (i >= 0)
	{
		return (i % 10);
	}
	else
	{
		return (-(i) % 10);
	}
}

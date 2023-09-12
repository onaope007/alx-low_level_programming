#include "main.h"
/**
 * _abs - checks the absolute value of an int
 * @i: the int that is to be checked
 * Return: -k if true, else returns k
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (-1 * i);
	}
}

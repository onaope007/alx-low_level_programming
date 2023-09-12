#include "main.h"
/**
 * _isalpha - prints the alphabets in lower case
 * @c: is the character to be checked
 * Return: returns 0 if successful else return 1
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

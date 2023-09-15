#include "main.h"
/**
 * print_square - The functio that prints the # sign
 * @size: The parameter of the functon
 * Return: the return value is void because the it is a void type of function
 */
void print_square(int size)
{
int length, width;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (length = 0; length < size; length++)
{
for (width = 0; width < size; width++)
{
_putchar('#');
}
_putchar('\n');
}
}
}

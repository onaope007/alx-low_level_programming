#include "main.h"
/**
 * print_diagonal - The function that is used to print the diagonal
 * Return: since it os avoid it does not have a return statement
 * @n: The parameter of the variavle
 */
void print_diagonal(int n)
{
int a, b;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (a = 0; a < n; a++)
{
for (b = 0; b < n; b++)
{
if (b == a)
{
_putchar('\\');
}
else if (b < a)
{
_putchar(' ');
}
}
_putchar('\n');
}
}
}

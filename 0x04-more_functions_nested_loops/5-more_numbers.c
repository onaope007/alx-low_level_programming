#include "main.h"
/**
 * more_numbers - The function used o print igits multiple times
 * Return: since it is a void it is not going to have a return value
 */
void more_numbers(void)
{
int i;

int j;

for (i = 0; i < 10; i++)
{
for (j = 0; j < 15; j++)
{
if (j > 9)
{
_putchar(j / 10 + '0');
}
_putchar(j % 10 + '0');
}
_putchar('\n');
}
}

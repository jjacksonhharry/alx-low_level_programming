#include "main.h"

/**
 * print_square - print diagonal line
 * @size: the size of the square to be printed
 * Return: always 0 on success
 */

void print_square(int size)
{
int i, j;
if (size <= 0)
{
_putchar('\n');
return;
}

for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}

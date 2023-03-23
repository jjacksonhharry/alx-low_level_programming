#include "main.h"

/**
 * print_diagonal - print diagonal line
 * @n: number of lines to be printed
 * Return: always 0 on success
 */
void print_diagonal(int n)
{
int i, j;

if (n <= 0)
{
_putchar('\n');
return;
}

for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}

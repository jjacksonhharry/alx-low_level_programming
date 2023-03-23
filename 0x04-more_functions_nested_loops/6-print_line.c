#include "main.h"

/**
 * print_line - print line
 * @n: number of lines to be printed
 * Return: always 0 on success
 */
void print_line(int n)
{
int i;

if (n <= 0)
{
_putchar('\n');
return;
}

for (i = 0; i < n; i++)
{
_putchar('_');
}

_putchar('\n');
}

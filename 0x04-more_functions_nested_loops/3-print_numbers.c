#include "main.h"

/**
 * print_numbers - print integers 0 to 9
 *
 *
 * Return: always 0 on success
 */

void print_numbers(void)

{
int i;
for (i = 0; i < 10; i++)
{
_putchar (i + '0');
}
_putchar ('\n');
}

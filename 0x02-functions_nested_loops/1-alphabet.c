#include "main.h"

/**
 * main - entry point of program
 * print_alphabet - prints alphabets
 * return: always 0 on success
 */

void print_alphabet(void)
{
char i;

for (i = 'a' ; i <= 'z' ; i++)
_putchar(i);
_putchar('\n');
}

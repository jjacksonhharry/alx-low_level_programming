#include "main.h"

/**
 * print_alphabet -function that prints alphabets in lower case
 * return: always 0 on success
 */

void print_alphabet(void)
{
char i;

for (i = 'a' ; i <= 'z' ; i++)
_putchar(i);
_putchar('\n');
}

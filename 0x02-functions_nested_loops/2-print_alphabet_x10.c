#include "main.h"

/**
 * print_alphabet_x10 - print alphabets 10 times
 * return: always 0 on success
 */

void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (j = 'a' ; j <= 'z' ; j++)
			_putchar(j);
		_putchar('\n');
	}
}


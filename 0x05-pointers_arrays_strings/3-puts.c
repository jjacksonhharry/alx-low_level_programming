#include "main.h"

/**
 * _puts - prints characters
 * @str: parameter
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

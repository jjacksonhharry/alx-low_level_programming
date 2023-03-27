#include "main.h"
/**
 * puts_half - prints the second half of a string
 * @str: the string to print
 */

void puts_half(char *str)
{
	int len = 0, start_index;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		start_index = len / 2;
	}
	else
	{
		start_index = (len - 1) / 2 + 1;
	}
	while (str[start_index] != '\0')
	{
		_putchar(str[start_index]);
		start_index++;
	}
	_putchar('\n');
}

#include "main.h"

/**
 * print_sign - Functions that print integer sign
 * _putchar - inputs character
 * @n: function parameter
 * Return: 1,0 or -1 when succesful
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}


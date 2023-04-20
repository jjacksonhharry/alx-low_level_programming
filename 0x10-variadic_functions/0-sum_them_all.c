#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: geginning of input variables
 * Return: 0 else return sum on success
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;

	int sum_them_all;
	unsigned int i;

	sum_them_all = 0;

	va_start(list, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum_them_all += va_arg(list, int);
	}

	va_end(list);

	return (sum_them_all);
}

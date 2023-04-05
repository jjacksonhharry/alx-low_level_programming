#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: parameter to return factorial
 * Return: -1 if n is negative else retur factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}

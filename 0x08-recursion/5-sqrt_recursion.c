#include "main.h"
/**
 * _sqrt_recursion - finds natural square root of a number
 * _sqrt_helper - help find the square root of a number
 * @m:parameter
 * @n: number to be checked
 * Return: -1 if no natural squareroot else squareroot
 */
int _sqrt_helper(int n, int m);

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);

	return (_sqrt_helper(n, 1));
}
/**
 * _sqrt_helper - help find the square root of a number
 * @m:parameter
 * @n: number to be checked
 * Return: -1 if no natural squareroot else squareroot
 */

int _sqrt_helper(int n, int m)
{
	if (m * m == n)
		return (m);
	else if (m * m > n)
		return (-1);
	return (_sqrt_helper(n, m + 1));
}

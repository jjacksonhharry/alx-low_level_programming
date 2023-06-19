#include "main.h"
/**
 * _abs - computes value of integer
 * @n: number to be computed
 * Return: value of number or zero
 */


int _abs(int n)
{
	if (n < 0)
	{
		int abs_val;

		abs_val = n * -1;
		return (abs_val);
	}
	return (n);
}

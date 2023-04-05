#include "main.h"
/**
 * is_prime_number - check whether n is a prime number
 * @n: integer to be checked
 * Return: 1 if prime number else return 0
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else if (n <= 3)
		return (1);
	else if (n % 5 == 0)
		return (0);
	else if (n % 2 == 1)
		return (1);

	return (0);
}

#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - function that converts a binary number to an int
 * @b: binary to be converted
 * Return: unsinged integer on success
 */
unsigned int binary_to_uint(const char *b)
{
	int n, j;
	unsigned int numb, non;

	n = 0;
	numb = 0;
	non = 0;

	if (b == NULL)
		return (non);

	while (b[n] != '\0')
		n++;
	n -= 1;
	j = 0;

	while (b[j])
	{
		if ((b[j] != '0') && (b[j] != '1'))
			return (non);
		if (b[j] == '1')
			numb += (1 * (1 << n));
		j++;

		n--;
	}
	return (numb);
}

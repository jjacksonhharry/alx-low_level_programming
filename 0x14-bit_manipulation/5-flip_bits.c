#include "main.h"
/**
 * flip_bits - function that returns the number of bits you would need to flip
 * @n: integer
 * @m: number of flips
 * Return: bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int git, bits;

	bits = 0;

	git = n ^ m;

	while (git > 0)
	{
		bits += (git & 1);
		git >>= 1;
	}
	return (bits);
}

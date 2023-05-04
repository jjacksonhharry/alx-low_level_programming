#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: integer
 * @index: index with binary
 * Return: -1 or 1 else bit on success
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int git, bit;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	git = n >> index;

	bit = git & 1;

	return (bit);
}

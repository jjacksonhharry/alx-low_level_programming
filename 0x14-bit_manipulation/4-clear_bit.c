#include "main.h"
/**
 * clear_bit - function that sets the value of a bit to 0
 * @n: integer
 * @index: binary index
 * Return: -1 else 1 on success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num;

	num = 1;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	num = ~(num << index);

	*n = *n & num;

	return (1);
}

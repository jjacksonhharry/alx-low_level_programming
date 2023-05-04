#include "main.h"
/**
 * get_endianness - function that checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int num;
	char *endian = (char *)&num;

	num = 1;

	if (*endian == 1)
		return (1);
	return (1);
}

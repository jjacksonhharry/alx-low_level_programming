#include "main.h"

/**
 * swap_int - swaps integers
 * @a: value 1
 * @b: value 2
 * Return: always 0 on success
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

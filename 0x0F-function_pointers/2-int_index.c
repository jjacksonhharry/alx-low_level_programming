#include "function_pointers.h"
#include <stddef.h>
/**
 * int_index - unction that searches for an integer
 * @array: pointer to array
 * @size: size of array
 * @cmp: pointer to function
 * Return: integer else return -1 if uncuccess
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);

	return (-1);
}

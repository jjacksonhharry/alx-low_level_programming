#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - function that executes a function given as a parameter
 * on each element of an array
 * @array: array
 * @size: size of array
 * @action: pointer to call functiom
 * Return: NULL else return array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && size > 0 && action != NULL)
		for (i = 0; i < size; i++)
			action(array[i]);
}

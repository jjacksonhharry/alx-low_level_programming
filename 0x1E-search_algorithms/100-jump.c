#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers
 *               using the Jump search algorithm.
 *
 * @array: Pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where the 'value' is located, or -1 if not found.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = (int)sqrt(size);
	size_t prev = 0;
	size_t i;
	
	if (array == NULL)
		return (-1);

	printf("Value checked array[0] = [%d]\n", array[0]);
	while (array[step < size ? step : size - 1] < value)
	{
		prev = step;
		step += (size_t)sqrt(size);
		
		if (prev >= size)
			return (-1);
		
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
	}
	printf("Value found between indexes [%d] and [%d]\n", prev, step);
	
	for (i = prev; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			break;
	}
	return (-1);
}

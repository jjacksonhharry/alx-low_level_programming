#include <stdio.h>
#include "search_algos.h"

/**
 * interpolation_search - Search for a value in a sorted array using
 * Interpolation search
 * @array: Pointer to the first element of the array to search in
 * @size: The number of elements in the array
 * @value: The value to search for
 * Return: The first index where 'value' is located, or -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;

	if (array == NULL)
	{
		return (-1);
	}

	while (low <= high && value >= array[low] && value <= array[high])
	{
		size_t pos = low + (((double)(high - low) / (array[high] - array[low]))
				   * (value - array[low]));

		if (pos >= size)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}

		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
		{
			return (pos);
		}

		if (array[pos] < value)
		{
			low = pos + 1;
		}
		else
		{
			high = pos - 1;
		}
	}
	return (-1);
}

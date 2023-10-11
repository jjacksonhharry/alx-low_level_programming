#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Search for a value in a sorted array using Jump search
 * @array: Pointer to the first element of the array to search in
 * @size: The number of elements in the array
 * @value: The value to search for
 * Return: The first index where 'value' is located, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	int jump = (int)sqrt(size);
	int left = 0;
	int right = 0;
	int i;

	if (array == NULL)
		return (-1);
	while (right < (int)size && array[right] < value)
	{
		printf("Value checked array[%d] = [%d]\n", right, array[right]);
		left = right;
		right += jump;
	}
	printf("Value found between indexes [%d] and [%d]\n", left, right);

	right = (right >= (int)size) ? (int)size - 1 : right;
	for (i = left; i <= right; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

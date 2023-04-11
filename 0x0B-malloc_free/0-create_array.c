#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars
 * @size: size of array to create
 * @c:character to initialize
 * Return: null if unsuccesful else return pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}

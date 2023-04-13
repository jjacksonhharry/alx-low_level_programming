#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - function that reallocates a memory block
 * @ptr: pointer
 * @old_size: old memory array
 * @new_size: new memory array
 * Return: NULL else return pointer on success
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}
	if (new_size == old_size)
		return (ptr);

	new_ptr = malloc(new_size);

	if (new_ptr != NULL)
	{
		if (new_size > old_size)
		{
			memcpy(new_ptr, ptr, old_size);
		}
		else
		{
			memcpy(new_ptr, ptr, new_size);

		}
	}
	free(ptr);

	return (new_ptr);
}

#include "main.h"
/**
 * _strlen - function that returns the length of the
 * string as an integer.
 * @s: string to be checked
 * Return: length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}

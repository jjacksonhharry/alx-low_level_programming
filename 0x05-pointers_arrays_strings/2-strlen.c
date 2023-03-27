#include "main.h"

/**
 * _strlen - returns length of string
 * @s: parameter to be inserted
 * Return: return len on success
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

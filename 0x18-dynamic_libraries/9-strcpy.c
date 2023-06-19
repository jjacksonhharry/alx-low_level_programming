#include "main.h"

/**
 * _strcpy - copies string
 * @src: string 1
 *
 * @dest: string 2
 * Return: return dest on success
 */

char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest_start);
}

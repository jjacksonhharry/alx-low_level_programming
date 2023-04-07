#include "main.h"
/**
 * _strcat - function that appends string
 * @src: string 1
 * @dest: string 2
 * Return: return dest on success
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0')
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';

	return (dest);
}

#include "main.h"

/**
 * _strncpy - copies a string
 * @src: string 1
 * @dest: string 2
 * @n: parameter
 * Return: dest when succesful
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

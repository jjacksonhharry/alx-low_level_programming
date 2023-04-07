#include "main.h"
/**
 * _strncat - concatenates two strings
 * @src: string 1
 * @dest: string 2
 * @n: parameter
 * Return: dest when succesful
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}

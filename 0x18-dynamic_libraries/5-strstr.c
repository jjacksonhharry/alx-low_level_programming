#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: input string
 * @needle: subtring to search
 * Return: a pointer or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;

		while (*haystack != '\0' && *n != '\0' && *haystack == *n)
		{
			haystack++;
			n++;
		}
		if (*n == '\0')
		{
			return (h);
		}
		haystack = h + 1;
	}
	return (NULL);
}

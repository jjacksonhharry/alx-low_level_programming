#include "main.h"
/**
 * _strchr -  locates a character in a string
 * @s: string to be checked
 * @c: character to be checked
 * Return: character found or null if no
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}

#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string input
 * @accept: searching pointer
 * Return: pointer to the byte or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *p_accept;

	while (*s != '\0')
	{
		p_accept = accept;
		while (*p_accept != '\0')
		{
			if (*s == *p_accept)
				return (s);
			p_accept++;
		}
		s++;
	}
	return (NULL);
}

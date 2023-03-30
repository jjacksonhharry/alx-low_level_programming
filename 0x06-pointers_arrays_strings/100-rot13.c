#include "main.h"
/**
 * rot13 -  encodes a string using rot13
 * @s: string to be encoded
 * Return: return p when succesful
 */
char *rot13(char *s)
{
	int i, j;
	char *p = s;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			j = s[i] - 'a';
			s[i] = (j + 13) % 26 + 'a';
		}
		else if (s[i] >= 'A' && s[i] <= 'Z')
		{
			j = s[i] - 'A';
			s[i] = (j + 13) % 26 + 'A';
		}
	}
	return (p);
}

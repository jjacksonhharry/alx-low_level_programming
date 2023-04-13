#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: parameter of bytes
 * Return: NULL else return new string on success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, s1_len, s2_len;
	char *concat;

	s1_len = 0;
	s2_len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1_len] != '\0')
		s1_len++;
	while (s2[s2_len] != '\0')
		s2_len++;

	if (n >= s2_len)
		n = s2_len;

	concat = malloc((s1_len + n + 1) * sizeof(char));

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		concat[i] = s1[i];

	for (i = 0; i < n; i++)
		concat[s1_len + i] = s2[i];

	concat[s1_len + n] = '\0';

	return (concat);

}

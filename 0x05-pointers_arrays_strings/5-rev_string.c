#include "main.h"
/**
 * rev_string - reverses string
 * @s: the string to reverse
 */

void rev_string(char *s)
{
	int i, j;
	char temp;

	j = 0;
	while (s[j] != '\0')
	{
		j++;
	}
	for (i = 0; i < j / 2; i++)
	{
		temp = s[i];
		s[i] = s[j - i - 1];
		s[j - i - 1] = temp;
	}
}

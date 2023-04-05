#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * is_palindrome - checks if string is a palindrome
 * @s: string to be checked
 * Return: 0 if  a string is a palindrome else return 1
 */
int is_palindrome(char *s)
{
	int x = strlen(s); /*find the length of a string*/
	int i;

	for (i = 0; i < x / 2; i++)
	{
		 if (s[i] != s[x - i - 1])
			 return (0);
	}
	return (1);
}

#include "main.h"
/**
 * _islower - This function takes a character as input and checks whether its
 * lowercase letter
 * @c: parameter to be printed
 * Return: return 1 on suxxess an 0 on failure
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}


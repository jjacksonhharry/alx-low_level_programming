#include "main.h"
/**
 * _isdigit - checks if charcter is digit
 * @c: parameter to be checked
 * Return: 1 if digit else return 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

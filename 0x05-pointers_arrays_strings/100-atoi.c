#include "main.h"

/**
 * _atoi - convert string to integer
 * @s: string to be converted
 * Return: return num * sign
 */

int _atoi(char *s)
{
	int sign = 1;
	int num = 0;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		if (*s >= '0' && *s <= '9')
		{
			num = num * 10 + (*s - '0');
			if (*(s + 1) < '0' || *(s + 1) > '9')
			{
				break;
			}
		}
		s++;
	}
	return (num * sign);
}

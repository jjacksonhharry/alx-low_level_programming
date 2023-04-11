#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of your program
 * @av: array of arguments
 * @ac: number of arguments
 * Return: null else return pointer on success
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, len, total_len;

	len = 0;
	total_len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			total_len++;
		total_len++;
	}
	str = malloc(sizeof(char) * total_len + 1);

	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[len] = av[i][j];
			len++;
		}
		str[len] = '\n';
		len++;
	}
	str[len] = '\0';

	return (str);

}

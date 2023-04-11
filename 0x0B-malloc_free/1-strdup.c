#include "main.h"
#include <stdlib.h>
/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * @str: string to be allocated
 * Return: return NULL if unsuccesfull else pointer
 */
char *_strdup(char *str)
{
	char *str2;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	str2 = malloc(sizeof(char) * (len + 1));

	if (str2 == NULL)
		return (NULL);

	while ((str2[i] = str[i]) != '\0')
		i++;

	return (str2);
}

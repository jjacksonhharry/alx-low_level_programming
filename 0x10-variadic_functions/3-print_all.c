#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all -  function that prints anything
 * @format: list of types of arguments
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list list;

	unsigned int i = 0;
	char c, *s;

	va_start(list, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(list, int);
				printf("%c", c);
				break;
			case 'i':
				printf("%d", va_arg(list, int));
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				break;
			case 's':
				s = va_arg(list, char *);
				if (s == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
			default:
				i++;
				continue;
		}
		if (format[i + 1])
			printf(", ");
		i++;
		}
	va_end(list);
	printf("\n");
}


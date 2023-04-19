#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name -  function that prints a name
 * @name: pointer
 * @f: function pointer
 * Return: Always 0 on success
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}

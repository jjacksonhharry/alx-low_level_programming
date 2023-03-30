#include "main.h"

/**
 * print_buffer - prints a buffer
 * @b: parameter
 * @size: parameter
 * Return: o when succesful
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}



	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		for (j = i; j < i + 10; j += 2)
		{
			if (j < size)
				printf("%02x ", (unsigned char)b[j + 1]);
			else
				printf("   ");
		}

		printf(" ");

		for (j = i; j < i + 10; j++)
		{
			if (j >= size)
				printf(" ");
			else if (b[j] >= 32 && b[j] <= 126)
				printf("%c", b[j]);
			else
				printf(".");
		}
		printf("\n");
	}
}

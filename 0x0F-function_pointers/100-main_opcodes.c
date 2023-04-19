#include <stdio.h>
#include <stdlib.h>
/**
 * print_opcodes - Prints the opcodes of the function
 * @n_bytes: The number of bytes to print
 */

void print_opcodes(int n_bytes)
{
	unsigned char *ptr = (unsigned char *) print_opcodes;
	int i;

	for (i = 0; i < n_bytes; i++)
	{
		printf("%02x ", ptr[i]);
	}
	printf("\n");
}
/**
 * main - program entry point
 * @argc: The number of command-line arguments
 * @argv: An array of strings
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}

	int n_bytes = atoi(argv[1]);

	if (n_bytes < 0)
	{
	printf("Error\n");
	return (2);
	}
	print_opcodes(n_bytes);

	return (0);
}

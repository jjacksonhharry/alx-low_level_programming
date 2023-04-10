#include <stdio.h>
/**
 * main - program entry point
 * @argc: parameter 1
 * @argv: parameter 2
 * Return: always 0 on success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}

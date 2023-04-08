#include <stdio.h>
/**
 * main - program entry point
 * @argc: parameter 1
 * @argv: parameter 2
 * Return: 0 on success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

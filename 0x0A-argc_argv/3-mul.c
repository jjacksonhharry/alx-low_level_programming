#include <stdio.h>
#include <stdlib.h>
/**
 * main - program entry point
 * @argc: parameter 1
 * @argv:parameter 2
 * Return: always 0 on success else return 1
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}

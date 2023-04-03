#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: the matrix of ints
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i, S1, S2;

	S1 = 0;
	S2 = 0;

	for (i = 0; i < size; i++)
	{
		S1 += *(a + i * size + i);
		S2 += *(a + i * size + size - 1 - i);
	}

	printf("%d, %d\n", S1, S2);
}

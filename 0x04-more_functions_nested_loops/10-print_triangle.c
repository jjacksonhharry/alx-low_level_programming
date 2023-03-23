#include "main.h"
/**
 * print_triangle - prints triangle
 * @size: The size of the triangle to print
 * Return: always 0 on success
 */

void print_triangle(int size)
{
int i, j, k;
if (size <= 0)
{
printf("\n");
}
else
{
for (i = 0; i < size; i++)
{
for (j = 0; j < size - i - 1; j++)
{
printf(" ");
}
for (k = 0; k <= i; k++)
{
printf("#");
}
printf("\n");
}
}
}

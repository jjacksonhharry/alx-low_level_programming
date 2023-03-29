#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: parameter 1
 * @n: parameter 2
 */
void reverse_array(int *a, int n)
{
	int i, j;
	int tmp;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}

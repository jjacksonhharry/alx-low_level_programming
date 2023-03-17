#include <stdio.h>
/**
 * main - Entry point for the program
 *Return: Always 0 (Success)
*/

int main(void)
{
int i, j;
for (i = 0; i < 100; i++)
{
for (j = i + 1; j < 100; j++)
{
if (!(i == 0 && j == 0))
{
putchar((i / 10) + '0');
putchar((i % 10) + '0');
putchar(' ');
putchar((j / 10) + '0');
putchar((j % 10) + '0');
putchar(',');
putchar(' ');
}
}
}
return (0);
}

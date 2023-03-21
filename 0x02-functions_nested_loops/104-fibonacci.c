#include <stdio.h>
/**
 * main - program entry point
 * Return: always 0 on success
 */

int main(void)
{
int a = 1, b = 2, i, next;

printf("%d, %d", a, b);

for (i = 3; i <= 98; i++)
{
next = a + b;
printf(", %d", next);
a = b;
b = next;
}
printf("\n");
return (0);
}

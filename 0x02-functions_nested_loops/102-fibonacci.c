#include <stdio.h>
/**
 * main - program Entry point
 * Return:0 on success
 */

int main(void)
{
unsigned long a = 1, b = 2, next;
int i, count = 50;

printf("%lu, %lu", a, b);
for (i = 2; i < count; i++)
{
next = a + b;
printf(", %lu", next);
a = b;
b = next;
}
printf("\n");
return (0);
}

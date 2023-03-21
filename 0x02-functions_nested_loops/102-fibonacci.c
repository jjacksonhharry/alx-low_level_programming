#include <stdio.h>
/**
 * main - program Entry point
 * Return:0 on success
 */

int main(void)
{
int a = 1, b = 2, c;
int count = 0;
printf("%d, %d", a, b);
count = 2;
while (count < 50)
{
c = a + b;
printf(", %d", c);
a = b;
b = c;
count++;
}
printf("\n");
return (0);
}

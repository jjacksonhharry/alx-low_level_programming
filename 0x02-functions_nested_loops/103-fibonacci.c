#include <stdio.h>
/**
 * main - program entry point
 * Return: always 0 on success
 */

int main(void)
{
long prev = 1, curr = 2, next;
long sum = 2; /* We start with the sum set to 2, because curr is even */

while (curr <= 4000000)
{
next = prev + curr;
prev = curr;
curr = next;
if (curr % 2 == 0)
{
sum += curr;
}
}
printf("%ld\n", sum);
return (0);
}

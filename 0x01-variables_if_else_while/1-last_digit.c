#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point for the program
 *Return: Always 0 (Success)
*/

int main(void)
{
int n;
int last_digit;

srand(time(NULL));
n = rand() - RAND_MAX / 2;
last_digit = n % 10;

printf("Last digit of %d and is ", n);
if (last_digit > 5)
{
printf("%d and is greater than 5", last_digit);
}
else if (last_digit == 0)
{
printf("%d and is 0", last_digit);
}
else
{
printf("%d and is less than 6 and not 0", last_digit);
}
{
printf("\n");
}
return (0);
}

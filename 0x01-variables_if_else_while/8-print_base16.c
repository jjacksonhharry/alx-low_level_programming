#include <stdio.h>

/**
 * main - Entry point for the program
 *Return: Always 0 (Success)
*/
int main(void)
{
int i;
char hex_digits[] = "0123456789abcdef";
for (i = 0; i < 16; i++)
{
putchar(hex_digits[i]);
}
putchar('\n');
return (0);
}

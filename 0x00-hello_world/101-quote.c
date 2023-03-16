#include <unistd.h>

/**
 * main - Entry point
 *
 * return: always return 1 (Error)
 */

int main(void)
{
const char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
const int len = sizeof(msg) - 1;
write(STDERR_FILENO, msg, len);
return (1);
}

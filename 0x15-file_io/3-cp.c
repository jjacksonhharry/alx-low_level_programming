#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
#include <fcntl.h>

#define BUF_SIZE 1024

int main(int argc, char *argv[])
{
	int from, to, flags;
	mode_t file;
	ssize_t num;
	char buf[BUF_SIZE];

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	from = open(argv[1], O_RDONLY);

	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	flags = O_CREAT | O_WRONLY | O_TRUNC;

	file = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	to = open(argv[2], flags, file);

	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((num = read(from, buf, BUF_SIZE)) > 0)
	{
		if (write(to, buf, num) != num)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (num == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		exit(100);
	}
	if (close(to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to);
		exit(100);
	}
	exit(EXIT_SUCCESS);
}

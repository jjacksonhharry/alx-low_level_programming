#include "main.h"
/**
 * read_textfile - function that reads a text file and prints it to the POSIX
 * @filename: file path
 * @letters: characters
 * Return: characters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t bytes, r;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		close(fd);
		return (0);
	}
	buf = malloc(sizeof(char) * letters);

	if (!buf)
	{
		close(fd);
		return (0);
	}
	bytes = read(fd, buf, letters);

	if (bytes == -1)
	{
		close(fd);
		free(buf);
		return (0);
	}
	r = write(STDOUT_FILENO, buf, bytes);

	if (r == -1)
	{
		close(fd);
		free(buf);
		return (0);
	}
	close(fd);
	return (bytes);
}

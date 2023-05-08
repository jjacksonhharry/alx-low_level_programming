#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: name of file to create
 * @text_content: string to write
 * Return: -1 else 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	int bytes, fd, len;

	len = 0;

	if (!filename)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);
	if (len > 0)
	{
		bytes = write(fd, text_content, len);

		if (bytes != len)
			return (-1);
	}
	close(fd);
	return (1);

}

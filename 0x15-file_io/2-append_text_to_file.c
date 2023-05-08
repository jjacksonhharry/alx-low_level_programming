#include "main.h"
#include <string.h>
/**
 * append_text_to_file - function that appends text at the end of a file
 * @text_content: text to append
 * @filename: name of file
 * Return: -1 else 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len;

	len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		len = write(fd, text_content, strlen(text_content));
		close(fd);
	}
	return (len == -1 ? -1 : 1);
}

#include "main.h"
/**
 * append_text_to_file - appends a text at the end of a file
 * @filename: name of file
 * @text_content: text
 * Return: 1 - success, -1 error
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_print;
	unsigned int len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;
		bytes_print = write(fd, text_content, len);
		if (bytes_print == -1)
			return (-1);
	}
	close(fd);
	return (1);
}

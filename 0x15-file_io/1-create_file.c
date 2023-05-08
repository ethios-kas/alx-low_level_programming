#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: text
 * Return: 1 - success, -1 error
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	unsigned int len = 0;
	ssize_t bytes_print;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

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

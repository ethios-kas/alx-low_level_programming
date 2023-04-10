#include "main.h"

/**
 * append_text_to_file - to allow it appends text at the end of a file
 * @filename: its a filename
 * @text_content: new added content.
 * Return: 1 if the fails does not exist or if it fails.
 * 1 if the file exists.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int rwr;
	int fd;
	int nletters;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		rwr = write(fd, text_content, nletters);

		if (rwr == -1)
			return (-1);
	}

	close(fd);

	return (1);
}

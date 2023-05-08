#include "main.h"
/**
 * read_textfile - a text file is read and printed.
 * @filename: name of the file
 * @letters: It should read and print a certain number of letters.
 * Return: he number of letters it could actually read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, bytes_print, written_bytes;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters + 1);
	if (!buffer)
		return (0);

	bytes_print = read(fd, buffer, letters);

	buffer[letters + 1] = '\0';
	close(fd);

	written_bytes = write(STDOUT_FILENO, buffer, bytes_print);

	if (written_bytes < 0)
		return (0);

	free(buffer);

	return (bytes_print);
}

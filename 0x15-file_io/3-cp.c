#include "main.h"
#include <stdarg.h>
#define BUFFER_SIZE 1024
/**
 * error_handler - handles errors
 * @exit_code: exit code
 * @message: error message
 * @type: data type for format
 */

void error_handler(int exit_code, char *message, char type, ...)
{
	va_list args;

	va_start(args, type);
	if (type == 's')
		dprintf(STDERR_FILENO, message, va_arg(args, char *));
	else if (type == 'd')
		dprintf(STDERR_FILENO, message, va_arg(args, int));
	else if (type == 'N')
		dprintf(STDERR_FILENO, message, "");
	else
		dprintf(STDERR_FILENO, "Error: Does not match any type\n");
	va_end(args);
	exit(exit_code);
}

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char buffer[BUFFER_SIZE];
	int fd_from, fd_to;
	ssize_t bytes_print, bytes_written;

	if (argc != 3)
		error_handler(97, "Usage: cp file_from file_to\n", 'N');

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_handler(98, "Error: Can't read from file %s\n", 's', argv[1]);

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_APPEND | O_TRUNC, 0664);
	if (fd_to == -1)
		error_handler(99, "Error: Can't write to %s\n", 's', argv[2]);

	while ((bytes_print = read(fd_from, buffer, 1024)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_print);
		if (bytes_written == -1)
			error_handler(99, "Error: Can't write to %s\n", 's', argv[2]);
	}

	if (bytes_print == -1)
		error_handler(98, "Error: Can't read from file %s\n", 's', argv[1]);
	if (close(fd_from) == -1)
		error_handler(100, "Error: Can't close fd %d\n", 'd', fd_from);
	if (close(fd_to) == -1)
		error_handler(100, "Error: Can't close fd %d\n", 'd', fd_to);

	return (0);
}

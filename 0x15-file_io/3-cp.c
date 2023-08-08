#include "main.h"

/**
 * print_error - print error
 *
 * @message: the error msg
 * @filename: file name
 * @fd: file descriptor
 *
 * Return: nothing.
 */
void print_error(const char *message, const char *filename, int fd)
{
	dprintf(STDERR_FILENO, message, filename, fd);
	exit(fd);
}

/**
 * main - check the code
 *
 * @argc: ID
 * @argv: ID
 *
 * Return: Always return.
 */
int main(int argc, char *argv[])
{
	int fileFrom, fileTo, bytesR, bytesW;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	fileFrom = open(argv[1], O_RDONLY);
	if (fileFrom < 0)
		print_error("Error: Can't read from file %s\n", argv[1], 98);
	fileTo = open(arg[2], O_WRONLY | O_TRUNC, 0664);
	if (fileTo < 0)
		print_error("Error: Can't write to %s\n", argv[2], 99);
	while ((bytesR = read(fileFrom, buffer, BUFFER_SIZE)) > 0)
	{
		bytesW = write(fileTo, buffer, bytesR);
		if (bytesW == -1 || bytesW != bytesR)
			print_error("Error: Can't write to %s\n", argv[2], 99);
	}
	if (bytesR == -1)
		print_error("Error: Can't read from file %s\n", argv[1], 98);
	if (close(fileFrom) == -1)
		print_error("Error: Can't close fd %d\n", argv[1], 100);
	if (close(fileTo) == -1)
		print_error("Error: Can't close fd %d\n", argv[2], 100);
	return (0);
}


#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytesR, bytesW;
	char *buffer;
	int fileDescriptor;

	if (!filename)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	fileDescriptor = open(filename, 0_RDONLY);
	if (fileDescriptor == -1)
	{
		free(buffer);
		return (0);
	}

	bytesR = read(fileDescriptor, buffer, letters);
	if (bytesR == -1)
	{
		free(buffer);
		close(fileDescriptor);
		return (0);
	}

	bytesW = write(STDOUT_FILENO, buffer, bytesR);
	if (bytesW == -1 || bytesW != bytesR)
	{
		free(buffer);
		close(fileDescriptor);
		return (0);
	}
	free(buffer);
	close(fileDescriptor);
	return (bytesW);
}

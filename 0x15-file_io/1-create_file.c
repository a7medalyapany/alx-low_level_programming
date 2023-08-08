#include "main.h"

/**
 * create_file - Creates a file and writes the specified text to it.
 * @filename: The name of the file to create.
 * @text_content: The NULL-terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fD, bytesW, textLength = 0;

	if (!filename)
		return (-1);

	fD = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fD < 0)
		return (-1);
	if (text_content)
	{
		while (text_content[textLength] != '\0')
			textLength++;
		bytesW = write(fD, text_content, textLength);
		if (bytesW == -1 || bytesW != textLength)
		{
			close(fD);
			return (-1);
		}
	}
	close(fD);
	return (1);
}

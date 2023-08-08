#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The NULL-terminated string to add at EOF.
 *
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fD, bytesW, textLength = 0;

	if (!filename)
		return (-1);

	fD = open(filename, O_WRONLY | O_APPEND);
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

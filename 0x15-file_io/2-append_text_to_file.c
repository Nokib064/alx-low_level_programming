#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_discr;
	int new_letters;
	int rwr;

	if (!filename)
		return (-1);
	file_discr = open(filename, O_WRONLY | O_APPEND);
	if (file_discr == -1)
		return (-1);
	if (text_content)
	{
		for (new_letters = 0; text_content[new_letters]; new_letters++)
			;
		rwr = write(file_discr, text_content, new_letters);
		if (rwr == -1)
			return (-1);
	}
	close(file_discr);
	return (1);
}


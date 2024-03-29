#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Reads text_file and prints to poxis STDOUT.
 * @filename: text file to read
 * @letters: number of letters to be read
 * Return:  number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;
	ssize_t a;
	ssize_t b;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	b = read(fd, buffer, letters);
	a = write(STDOUT_FILENO, buffer, b);

	free(buffer);
	close(fd);
	return (a);
}


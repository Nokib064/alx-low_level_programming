#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_discr;
	ssize_t read_nw, write_nw;
	char *buf;

	if (!filename)
		return (0);

	file_discr = open(filename, O_RDONLY);

	if (file_discr == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	read_nw = read(file_discr, buf, letters);
	write_nw = write(STDOUT_FILENO, buf, read_nw);

	close(file_discr);

	free(buf);

	return (write_nw);
}

